#include <stdio.h> 

int main(void) {
	int x, y;
	printf("   * "); // multiple sign
	
	//Create the  first top row
	for( x=1; x <=10; x++) 
	printf("%4d", x);
	printf("\n"); // go down 1 for each number 
	// create the row
	for(x =1; x <=10; x++) {
		printf("%4d ",x); // print out the number in the rows
		for(y = 1; y <= 10; y++) { // initiate y as go forward
		printf("%4d", x * y); // print out the multiplication
		}
		printf("\n"); // after 10 no, go down 1 line
	} 
	
return 0;
}