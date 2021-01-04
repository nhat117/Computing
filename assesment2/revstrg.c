/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2020C
  Assignment: 2
  Author: Nhat Minh BUI
  ID: s3878174
  Created  date: 04/01/2021
  Acknowledgement:https://www.tutorialspoint.com/c-program-to-reverse-array-of-strings, repl.it/@nhat117/week5/ex3
*/
#include<stdio.h>
#include <stdlib.h>

// Variable declaration 
const int SIZE = 100;
char rev[SIZE] = {};
char str[SIZE] = {};
int start = 0;
int lastindex = (sizeof (str) / sizeof (str[0]) ) -1;
int *pstart = &start, *plast = &lastindex;

void revstr (char *str, int start ,int lastindex) {
	// Base case 
	if (lastindex == 0) {
		str[0] = rev[*pstart];
	}
	rev[start] = str[lastindex];
	// Recursion function
	revstr( str, *pstart + 1 , *plast - 1 );
}

// Print out the reversed string
void printrevstr(char *rev) {
	int size =  (sizeof (rev) / sizeof (str[0]) );
	for (int iterator = 0; iterator <=size ; iterator ++ ) {
		printf("%c", rev[iterator]);	
	}
}

int main (void) {
	printf("Enter a string : ");
	scanf("%[^\n]s", str);
	revstr( str, start, lastindex);
	printrevstr(rev);
	return 0;
}

