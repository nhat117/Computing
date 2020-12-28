#include <stdio.h>

// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char start_rod, char destination_rod, char free_rod)
{
    if (n > 0) {
		towerOfHanoi(n-1, start_rod,  destination_rod, free_rod);
		printf("Transfer the pieces with size %d from %c to %c\n", n, start_rod, destination_rod);
		towerOfHanoi(n-1, free_rod, destination_rod, start_rod);
	}
}

int main()
{
    int n ; // Number of disks
	printf("Enter the number of disk: ");
	scanf("%d", &n);
    towerOfHanoi(n, 'S', 'E', 'F');  // A, B and C are names of rods
    return 0;
}
