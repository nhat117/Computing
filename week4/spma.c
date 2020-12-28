#include <stdio.h>

void spiralPrint(int m, int n, int a[3][3])
{
    int i, k = 0, l = 0;
 
    /*  k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
 
    while (k < m && l < n) {
        /* Print the first row from the remaining rows */
        for (i = l; i < n; ++i) {
            printf("%d ", a[k][i]);
        }
        k++;
 
        /* Print the last column from the remaining columns
         */
        for (i = k; i < m; ++i) {
            printf("%d ", a[i][n - 1]);
        }
        n--;
 
        /* Print the last row from the remaining rows */
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                printf("%d ", a[m - 1][i]);
            }
            m--;
        }
 
        /* Print the first column from the remaining columns
         */
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                printf("%d ", a[i][l]);
            }
            l++;
        }
    }
}
int main(void) {
	int arr[3][3],i ,j;
	int value = 1;
	// stored the value into the array
	for (int i = 0; i <3; i++) {
		for (int j = 0; j < 3; j++) {
				arr[i][j] = value;
				value ++;
			}
		}
	

	// print out the matrix
	printf("\nThe matrix is : \n");
  	for(int i=0;i<3;i++)
  	{
      printf("\n");
      for(int j=0;j<3;j++) {
           printf("%d\t",arr[i][j]);
  		}
	}
 	printf("\n\n");
	spiralPrint(3, 3 , arr);
	return 0;
}