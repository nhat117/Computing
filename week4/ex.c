#include <stdlib.h>

int main() {
	int arr[] = {4,3,2,1};
	int key = 0;
	int it = 0;
	for (int i = 1; i < 4; ++i) {
		key = arr[i];
		it = i - 1;

		while (key > arr[it]) {
			arr[it + 1] = arr[it];

		}
	}
}