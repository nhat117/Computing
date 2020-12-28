#include <stdio.h>

int sumofrange(int n) {
	int sum = 0;
	if (n == 1) /// Base case 
		return sum = 1; 
	else 
		sum = n + sumofrange(n -1);
	return sum;
}

int main (void) {
	printf("Please enter range");
	int n;
	scanf("%d", &n);
	printf(" The total from 1 to %d is %d", n, sumofrange(n));
	return 0;
}