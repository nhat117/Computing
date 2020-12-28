#include <stdio.h>

void printdigit(int i) {
	if (i < 10) {
		printf("%d ", i); // base case
	} else {
		printdigit(i / 10); // recursion part
		printf("%d ", i % 10);
	}
}

int main(void) {
	printf("Enter a num");
	int num;
	scanf("%d", &num);
	printdigit(num);
	return 0;
}