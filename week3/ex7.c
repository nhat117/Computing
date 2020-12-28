#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// create a random value ranging from 0 to 2

long int random(void) {
	int ran_number;
	ran_number = rand() % 3;
return ran_number;
}

// comparation function
int lose(int bot, int user){
	int result;
	if (bot == 0 && user == 1) {
		result = 0;
	} else if (bot == 1 && user == 0) {
		result = 0;
	} else if (bot == 2 && user == 1) {
		result = 0;
	} else if (bot == user){
		result = 2;
	}else {
		result = 1;
	}
return result;

}
int main(void) {
	int pc, input;
	char fin;
	pc = random();


	while (1) {
		printf("Welcome to rock papaer scissor\n");
		printf(" Rock: 0, Paper : 1; Scissor : 2. Cancel: -1\n");
		printf("pc : %d", pc);
		scanf("%d", &input);

		if (input < -1 || input >= 3){
			printf("You have enterd an invalid value. Please try again\n");
			continue;
		}
		if (input == -1){
			printf("See you again");
			break;
		}
		fin = lose(pc, input);
	
		if (fin == 2) {
			printf("It's a draw\n");
		} else if(fin == 1) {
			printf("You have win\n");
		} else {
			printf("you have lost\n");
		}
	
		

	}
	return 0;
	
} 