#include <stdio.h>
#include <stdlib.h>
#include<conio.h>



void printInvertedri8Triangle(int n)
{
 if (n==1)
 {
     printf("* \n");
 }

 else if(n>1)
 {   int i;
     for (i=0;i<n;i++)
     printf("*");
     printf("\n");
     printInvertedri8Triangle(n-1);//function call recursively
 }
}

void printrightTriangle(int n)    //3  2  1
{
    if (n==1)
 {
 printf("*");                     //first print * when n=1 then
 printf("\n");
 }

 else if(n>1)
 {

     int i;
     printrightTriangle(n-1);
     printf("%d",n);                    // i=2 then 3  and 4
     for (i=0;i<n;i++)
     printf("*");
     printf("\n");
 }
}                                       // ends recursively



void main(void)
{
clrscr();
//printrightTriangle(4);
printInvertedri8Triangle(4);          
getch();
}