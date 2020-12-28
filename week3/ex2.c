#include <stdio.h>

int main(void) {
	int x = 0, sum = 0;
	int count = 0;
	for (count = 0 ; count <= x ; count ++)  {
		sum += x;
		printf("Please enter a positive interger: \n");
		scanf("%d", &x);
		if (x < 0) break;
	}
	printf(" Sum is %d\n", sum);
	printf("There is %d positive number \n", count);
	return 0;
}