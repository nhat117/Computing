#include <stdio.h>

int main(void) {
	int arr[] = {5,4,3,2,1};
	int size = sizeof(arr);
	int inner , outer = 0, tmp;
	
	// selection sort
	for(outer = 0; outer <= size; outer ++) {
		for (inner = outer + 1; inner <= size ; inner++) {
			if (arr[outer] >= arr[inner]) {
				 tmp = arr[outer];
				arr[outer] = arr[inner];
				arr[inner] = tmp;
			}
		}
	}

	// return the result
	for (int i = 0; i <= 4; i++) {
		printf("%d ", arr[i]);
	}
return 0;
}