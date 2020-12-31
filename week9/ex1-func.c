#include<stdio.h>
#include<string.h>
#include<ctype.h>

void errorhandling(char *unitfrom,char *unitto) {
	 for (int iterator = 0; iterator < 3; ++iterator) {
        *(unitfrom + iterator) = tolower(*(unitfrom + iterator));
        *(unitto + iterator) = tolower(*(unitto + iterator));
	}
}

// converting money 
float conv(char *unitfrom, char *unitto, float moneynum) {
	errorhandling(unitfrom, unitto);
	if ( strcmp(unitfrom, "vnd") == 0 && strcmp(unitto, "usd") == 0) {
        return  moneynum * 0.000043 ;
    } else if( strcmp(unitfrom, "usd") == 0 && strcmp(unitto, "vnd") == 0) {
        return moneynum * 23082;
    } else if( strcmp(unitfrom, "usd") == 0 && strcmp(unitto, "aud") == 0) {
        return moneynum * 1.3;
    } else if( strcmp(unitfrom, "aud") == 0 && strcmp(unitto, "usd") == 0) {
        return moneynum * 0.77;
    } else if( strcmp(unitfrom, "vnd") == 0 && strcmp(unitto, "aud") == 0) {
        return moneynum * 0.000056;
    } else if( strcmp(unitfrom, "aud") == 0 && strcmp(unitto, "vnd") == 0) {
        return moneynum * 17783.45;
    }
}