#include <stdio.h>
#include <string.h> // must include string.h to use strcpy
#include <math.h>
int main(void) {
	// create a result variable
	float result;
	char final_grade [4]; // set the length to the char variable
	
	printf("Please enter your final result : \n");
	scanf("%f", &result); // get the result
	// convert the result to grade
	while(result < 0 || result > 100) // check if the entered result is in range
	{
	printf("the accepted result is between 0 and 100, please re enter the value.\n");
	scanf("%f", &result);
	if (result >= 0 && result <= 100) break;
	} 
	 
	result = round (result);
	if ( result  <50) {
		strcpy(final_grade,"NN");	// use strcpy to assign the grade to the char variable
	} else if ( result <60) {
		strcpy(final_grade,"PA");
	} else if (result <70) {
		strcpy(final_grade, "CR");
	} else if (result < 80){
		strcpy(final_grade, "DI");
	} else  {
		strcpy(final_grade ,"HD");
	}
	printf("Your final grade is : %s", final_grade);
	return 0;
}
