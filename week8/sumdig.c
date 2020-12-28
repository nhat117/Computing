#include <stdio.h>

int sumdig(int num) {
	if (num == 0) {
		return 0;
	} else {
		return num % 10 +sumdig(num/10);
	}
}

int main (void) {
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	printf("sum all of the digit of %d is %d", num, sumdig(num));
	return 0;
}