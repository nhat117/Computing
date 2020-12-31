#include <stdio.h>

void printarr (int *arr, int lastindex) {
	if (lastindex < 0)
		return;
	printf ("%d ", arr[lastindex]);
	printarr (arr, lastindex - 1 );
}

void printarrfoward (int *arr, int start, int size) {
	if (start == size)
		return;
	printf("%d ", arr[start]);
	printarrfoward (arr, start + 1 , size);
	
}
int main (void) {
	int arr[5] = {1,2,3,4,5};
	int size = (sizeof (arr) / sizeof (arr[0]) );
	int lastindex = size -1;
	printarr (arr, lastindex);
	printf("\n");
	printarrfoward(arr, 0, size);
}