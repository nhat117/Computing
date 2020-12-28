/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2020C
  Assignment: 1
  Author: Nhat Minh BUI
  ID: s3878174
  Created  date: 23/11/2020
  Acknowledgement: Clearly acknowledge the resources that you use to complete this assessment
*/

#include <stdio.h>

int main(void) {
	// Initiate a counting variable
	int count = 0; 
	
	// Print out the row of number
	for (int num = 48; num < 58; num ++) {
		printf("%2c", num);
	}
	printf("\n");

	// Print the uppercase part of the table
	for (int up = 65; up < 91; up ++) {
		printf("%2c", up);
		count ++;
		if (count == 10) {
			printf("\n");
			count = 0;
		}
	}

	// Make the lowercase part of the table
	for (int low = 97; low < 123; low ++) {
		printf("%2c", low);
		count ++;
		if (count == 10) {
			printf("\n");
			count = 0;
		}
	}
	
	printf("\n");
    return 0;
}