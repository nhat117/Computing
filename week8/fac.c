#include <stdio.h>

int fac(int num) {
	if (num == 1) 
		return 1;
	else 
		return num *= fac(num-1);
}

int main(void) {
	int num;
	printf("Please enter the num ber for factorial calculation: ");
	scanf("%d", &num);
	printf (" %d ! is %d", num, fac(num));
	return 0;
}