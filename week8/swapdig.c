#include <stdio.h>
// Need ponter to implicially change the value of the variable
void swap(int *n1, int *n2) {
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

int main (int argc, char const *argv[]) {
	int numa = 5, numb = 6;
	int *n1 = &numa, *n2 = &numb;
	printf("Value of number before swap %d, %d", numa, numb);
	swap(n1, n2);
	printf("Value of number after swap %d, %d", numa, numb);
	return 0;
}