/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2020C
  Assignment: 1
  Author: Nhat Minh BUI
  ID: s3878174
  Created  date: 23/11/2020
  Acknowledgement: https://rmit.instructure.com/courses/82917/files/15788676, repl.it/@nhat117/week3/ex1
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int heights_arr[30], height = 0; 
	int max = 190;
	int min = 150;

	// A. Generate height btw 150 and 190 and store in the array
	srand(time(NULL));
	for (int count = 0; count < 30; count ++) {
		heights_arr[count] = rand() % (max - min) + min;
	}

	// Display the height int to line, each 15 heights
    for (int count = 0; count < 30; count ++) {
		printf("%d ", heights_arr[count]);
		if (count == 14) {
			printf("\n");
		}	
	} 
	printf("\n");
	
	// find and dispkay the second highest height
	// first sorting the height array from the highest to lowest
	// bubble sort
	int tmp = 0, i = 0, j = 0;
	for ( int j = 0; j < 30; j++) {
		for (int i =  1; i < 30 - j; i++) {
			if (heights_arr[i] > heights_arr[i - 1]) {
				 tmp = heights_arr[i];
				heights_arr[i] = heights_arr[i - 1];
				heights_arr[i - 1] = tmp;
			}
		}
	}

    // make sure that we filtered out the largest heights
	int largest = heights_arr[0];
	for ( int i = 1; i < 30; i ++) {
		if (heights_arr[i] != largest) {
			printf(" The second highest height is %d\n", heights_arr[i]);
		break;
		}


	}

	
	
	return 0;
}