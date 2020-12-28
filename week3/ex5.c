#include <stdio.h>
int main() {
   int col, rows,rows_input;
   printf("Enter the number of rows (value must btw 1 and 15) :");
   scanf("%d", &rows_input);
   
   // check if the enter is in range
  	 while(rows_input < 1 || rows_input >15) {
	   	printf("The value you have entered is out of range. Please try again");
	   	scanf("%d", &rows);
	   	if (rows_input >=1 && rows <=15) break;
	
	// the number is valid start making the triangle
   } 
   	//make the rows
	for (rows = rows_input; rows >=1; --rows) { 
	   // make the number on the half side of the triangle decreadecrease

	 // pass the value of j to i cuz the total figure on one side of the one half of the triangle = number of rows
      	
		for (col = rows; col >=1; --col) {
         		printf("%4d ", j);
	
	//make the other half side of the triangle increase
	
	for (col = 2; col <= rows; col++) {
		printf("%4d ", col);
	}
	}
	      
      	printf("\n");
}
   
   return 0;
}