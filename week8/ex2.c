#include <stdio.h>

int leapchk(int yr) {
	int value = 0;
	if (yr % 4 == 0 && yr % 100 != 0) 
		value = 1;
	return value;
}

void result(int value) {
	if (value == 0) {
	printf("The year you have entered is not a leap year"); 
	}
	else {
	printf("The year you have entered is a leap year"); 
	}
}

int main(void) {
	int yr;
	printf("Pls enter a year to chack : ");
	scanf("%d", &yr);
	result(leapchk(yr));
	return 0;
}