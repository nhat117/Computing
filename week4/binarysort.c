#include <stdio.h>

int main(void) {
	int arr[11] = {1,2,3,4,5,6,7,8,9,10};
	int l = 0, r = 10, medium = 0, T = 7;
	// find 7 
	while (l <= r) {
		
		medium = ((r - l) / 2 ) + l;
		if (T == arr[medium]) {
			printf("1 %d \n", arr[medium]);
			break;
		} else if (arr[medium] < T) {
			l = medium + 1;
			printf("2 %d \n", arr[medium]);

		} else {
			r = medium;
			printf("3 %d \n", arr[medium]);

		}
	}
	printf("%d ", arr[medium]);
	return 0;
}