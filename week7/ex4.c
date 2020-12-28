#include <stdio.h>

int input_int (int i) {
	int sum = 0;
	while(i > 0) {
		int p = i % 10;
		sum += p;
		i /=10;
	}
	
	return sum;
}
int main (void) {
	int i;
	scanf("%d", &i);
	printf("%d", input_int(i));
	return 0;
}