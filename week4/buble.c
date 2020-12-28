#include <stdio.h>

int main(void) {
	int arr[5] = {5, 3, 4, 1, 2};

	int tmp = 0;
	
	// buble sort
	for ( int j = 0; j < 5; j++) {
		for (int i =  0; i < 5 - j - 1; i++) {
			if (arr[i] > arr[i - 1]) {
				 tmp = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = tmp;
			}
		}
	}

	// return the result
	for (int i = 0; i < 5 ; i++) {
		printf("%d", arr[i]);
	}
return 0;
}