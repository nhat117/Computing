#include <stdio.h>
#include <ctype.h>

int main(void) {
	char arr [5][100] = {};
	for (int i = 0; i < 5; i ++ ) {
		printf ("Please enter full name %d", ++i);
		scanf("%[^\n]s", arr[i]);
		}
	

	//Determine the first name
	for (int i = 0; i < 5; i++) {
		for(int j = 0; j < 100; j++) {
			if (isspace(arr[i][j])) {
				for (int k = 0; k < j; k++) {
					printf("%c", arr[i][k]);
				}
			}
		} 
		printf(" ");
	}

	return 0;
} 