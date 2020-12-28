#include <stdio.h>
#include <string.h>

int main(void) {
	char arr_char[14] =  {'R', 'M', 'I', 'T', 'U', 'n', 'i', 'v', 'e', 'r', 's',
'i', 't', 'y'};
	int size = sizeof(arr_char) / sizeof(arr_char[0]);
// Insertionsort
	int key = 0;
	int it = 0;
	for (int i = 1; i < size; ++i) {
		key = arr_char[i];
		it = i - 1;

		while (arr_char[it] > key && it >= 0) {
			arr_char[it + 1] = arr_char[it];
			--it;
		}
		arr_char[it + 1] = key;
	}

	for (int i = 0; i < 14; i++){
	printf("%c ", arr_char[i]);
	}
return 0;
}