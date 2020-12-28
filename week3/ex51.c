#include <stdio.h>

int main() {
	int space, height , count, i, k; 
	char space_1 = ' ';
	printf("Enter the row number between 1 and 15: \n");
	scanf("%d", &height);
	//make sure that the entere value is always in range
	while(height < 1 || height > 15) {
		printf("The value you have enter is error. Please try again");
		scanf("%d", &height); // take the input height value
		if (height > 0 && height < 16) break;
	}

	//a big ass count variable
	for (int count = height; count > 0; --count) {
		//make indentation for the pyramid
		for (int space = count -1; space > 0; --space) {
		printf("%c", space_1);
		}
		//make the left side of the pyramid
		for (int i = height - (count - 1); i >0; --i) {
			printf("%d", i);
			}
		// make the otherside of the pyramid
		for (int k = 2; k <= height - (count -1); ++k) {
			printf("%d", k);
		}
		
		
		
                
		printf("\n");
	}
	return 0;
}