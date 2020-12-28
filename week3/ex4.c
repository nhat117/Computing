#include <stdio.h> 

int main(void) {
	int col, row, line;
	printf("   * "); // multiple sign
	
	//Create the  first top row
	for (col = 1; col <=10; col++) { 
		printf("%4d", col);
		printf("\n"); // then go down 
	}
		// create the row
	for (col =1; col <=10; col++) {
		printf("%4d ", col); // print out the number in the rows
		for (row = 1; row <= 10; row++) { // initiate y as go forward
				printf("%4d", col * row); // print out the multiplication
			}
	printf("\n"); // after 10 no, go down 1 line
	}
	
return 0;
}
 // can but the number btw %and the variable reserve value ex %4d. By default it will be right align, if want left align, use the - signinfront of the value