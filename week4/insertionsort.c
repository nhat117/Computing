#include <stdio.h>

int main() {
	int arr[] = {8,2,0,9,5,4,3,2,1};
	int size = sizeof(arr) /sizeof(int);

	//algorithm to insertion sort

	int key = 0;
	int it = 0;
	for (int i = 1; i < size; ++i) {
		key = arr[i]; //make a key value
		it = i - 1;
		//start insertion algo
		while (arr[it] > key && it >= 0) {
			arr[it + 1] = arr[it];
			--it;
		}
		arr[it + 1] = key;
	}
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}


	return 0;
}