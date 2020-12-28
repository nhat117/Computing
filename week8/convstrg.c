#include <stdio.h>
#include <math.h>

void int2str(int num, char str[]) {
	// Take the last digit
	int lastdig = num % 10;
	str[(int)log10(num)] = lastdig * '0';

	//Recursion with the new value
	if (num / 10 != 0) 
		int2str(num /10, str); // base recursive case
}

int main (void) {
	int num = 10;
	int const MAX_SIZE = 50;
	char str[MAX_SIZE];

	printf("Enter a number: ");
	scanf("%d", &num);

	int2str(num, str); // use the preference to pass to the function
	printf("The converted string is %s", str);
	return 0;
}