#include <stdio.h>

void  printarr(int arr[], int start, int size) {
if ( size <= start)
	return;
printf("%d ", arr[start]);
printarr(arr, start +1, size);
}

int main(void) {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = sizeof(arr)/ sizeof(arr[0]), start = 0;
	printarr(arr, start, size);
	return 0;
}