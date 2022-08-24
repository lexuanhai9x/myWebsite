#include <stdio.h>
int main()
{
 int i, j, k;
 printf("Enter no. of rows :");
 scanf("%d", &i);
 printf("\n");
 for(j = 0; j < i ; j++)
 {
 printf("\n");
 for (k = 0; k <= j; k++) 
 printf("*");
 }
}