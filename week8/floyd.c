#include<stdio.h>
  
void printFloydTriangle(int rowNumber, int totalRows);
  
int main() {
    int rows;
    printf("Enter the number of rows of Floyd's triangle\n");
    scanf("%d", &rows); 
 	printf("\n");
    printFloydTriangle(1, rows);
    return 0;
}
  
void printFloydTriangle(int rowNumber, int totalRows) {
   int elementCount, counter;
   /* Recursion termination condition */
   if(rowNumber > totalRows)
       return; 
   elementCount = ((rowNumber-1)*rowNumber)/2;
 
   for (counter = 1; counter <= rowNumber; counter++) {
       printf("%d ", ++elementCount);
   }
   printf("\n");
   printFloydTriangle(rowNumber+1, totalRows);   
}