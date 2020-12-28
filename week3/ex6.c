#include <stdio.h>

int main(void) {
	int i, space, rows, k = 0, count = 0, count1 = 0;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	// Make sure the user enter the row value from 1 to 15
	while (rows <1 || rows > 15) {
		printf("The rows value must be between 1 and 15 !! Please try again \n");
		scanf("%d", &rows);
		if (1 <= rows && rows<= 15) break;
	} 

		// if the value are valid, start making the pyramid
	for ( i = 1; i <= rows; i++) {
			// Make space for the triangle
		for (space = 1; space <= rows - i; space ++) // the space on the right side of the triangle =number of rows -1
		 {
				printf("#");
				count ++;
			}
			//initiate 2 count variable 1 for the so chan, wone for the odds number
		while( k != 2 * i - 1) { //odds number
			if (count <= rows - 1) {
				printf("%d ", i - k);
				count ++;
			} else {
				count1 ++; //evennumber case
				printf("%d ", (i + k - 2 * count1));
				}
			k ++;
			}
			count1 = count = k = 0; //reset k and count
			printf("\n");
		}
	
	return 0;
}