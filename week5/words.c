#include <stdio.h>
#include <ctype.h>
int main(void) {
	char arr[100] = {};
	printf("Please enter a sentence:\n");
	fgets(arr,100,stdin);

	//count the words in a string
	int words = 0, i=0;
	if(arr[0] != '\0') {     // Only counts when string is not empty
		while (arr[words] != '\0') {
			if (isspace(arr[i]) && !isspace(arr[i-1])) {
				words++;
			}	 
			i++;
		}
		words++;
	}
	printf("There is %d words in the input sentence", words);
	return 0;
}