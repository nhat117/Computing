#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "ex1.h"

#define	 MAX 256

int main(void) {
	printf("Enter your currency conversion question (e.g \"100 USD TO VND\"): ");
	char *unitfrom, *unitto, *ommit;
	unitfrom =  malloc(MAX);
	unitto = malloc(MAX);
	ommit = malloc(MAX);
	float moneynum;
	scanf("%f %s %s %s", &moneynum, unitfrom, ommit, unitto);
	float convertedmoney;
	convertedmoney =  conv( unitfrom, unitto, moneynum);
	printf("%f %s to %s is %f", moneynum, unitfrom, unitto, convertedmoney);
}

