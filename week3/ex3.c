#include <stdio.h>

int main(void) {
	int char_count = 0, i; // set the intial value of char_count to be 0

	for (i = 33; i < 127; i++) // the ascii value from ! to ~ is ranging from 33 to 127 according to the ascii table 
	 {		
		printf("%c ", i); /// printf automatically done the convert from i to ascii if use %c as data type
		char_count ++;
		if (char_count == 10) // 10 character per line
		{
			printf("\n");
			char_count = 0; // reset the char_count
		}


	}
 return 0;
}