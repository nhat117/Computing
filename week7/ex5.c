#include <stdio.h>

int pow_num(int num, int root) {
	int result = 1;
	for (int i = 1; i <= root; i++) {
		result *= num;
	}
return result;
}

int main(void) {
	int num, root;
	scanf("%d", &num);
	scanf("%d", &root);
	printf("%d", pow_num(num, root));
	return 0;
}