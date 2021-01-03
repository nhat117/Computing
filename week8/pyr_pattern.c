#include <stdio.h>

void recprint(int size) {    
    if(size == 1) { 
	  printf("%c\n", '*'); 
	  return; 
    } 
    for(int i = 0; i < size; ++i) 
		printf("%c", '*'); 
	 	recprint(size - 1); 
} 
int main(void) {
	printf("enter size: ");
	int size;
	scanf("%d", &size);
	recprint(size);
}