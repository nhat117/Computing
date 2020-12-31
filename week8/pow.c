#include <stdio.h>

int power(int base, int pow) {
	if ( pow == 0) {
		return 1;
	} else return base * power(base, pow - 1);
}

int main (void) {
	int base, pow;
	printf("Pow: ");
	scanf("%d", &pow);
	printf("Base: ");
	scanf("%d", &base);
	printf("%d", power(base, pow));
	return 0;
}