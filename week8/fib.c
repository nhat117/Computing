#include  <stdio.h>

int fib(int n) {
	if (n == 0) // Base case 
		return 0; 
	else if (n ==1)
		return 1;
	else 
		n = fib(n-1) + fib (n-2); // Recursion stuff
	return n;
}

void printfib(int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", fib(i));
	}
}

int main(void) {
	printf("Please enter the range of fib series: ");
	int n;
	scanf("%d", &n);
	printf("Fibonacci of %d number is \n", n);\
	printfib(n);
	return 0;
}