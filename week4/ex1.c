#include <stdio.h>

#include <stdlib.h>

//Generate a random number

long int random(void) {
	int ran_number;
	ran_number = rand() % 50 + 50;
return ran_number;
}

int main(void) {
	int array_int[11]; // initialise array of 10 random interger
for (int i = 0; i < 10; i++) {
	array_int[i] = random(); // push the random interger in the array 
}

// print the first to the last element of the array

for (int i = 0; i < 10; i++) {
	printf("%d ", array_int[i] );
}
printf("\n");

// print the last to the first element

for (int i = 9; i >=0; i--) {
	printf("%d ", array_int[i]);
}
printf("\n");

// count the element that is >80 and print out

int count = 0;
for (int i = 0; i < 10; i++) {
	
	if (array_int[i] > 80) {
		count ++;
		printf ("%d ", array_int[i]);
	}

}
printf("There is %d number >80\n", count);

// get the smallest element in the array 

int min;
for (int i = 0; i < 10; i++) {
	min = array_int[i]; // min equal i 
	i++; // i go forward to go to the next element in the array
	if (min > array_int[i]) { // compare min to the next element in the array
		min = array_int[i];
	}
	
}
printf("%d\n", min);

// buble sort algorithm

int temp, inner, outer; 
for (outer = 0; outer <10; outer ++){ // big ass over driver count variable
	for (inner =  1; inner < 10 - outer; inner ++) {
		//compare to result adjacent nto each other and swap them
		if(array_int[inner -1] > array_int[inner] ) {
			temp = array_int[inner - 1 ];
			array_int[inner -1] = array_int[inner];
			array_int[inner] = temp;
		}
	
}
printf("Sorted array: \n");
for (int i = 0; i < 10; i++) {
	printf("%d ", array_int[i] );
}
return 0;
}
}
