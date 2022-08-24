#include <stdio.h>
int main(){
    int y,j,i;
    printf("nhap so hang:");
    scanf("%d",&y);
    for ( i = 0; i < y; i++)
    {
       printf("\n");
       for (j = 0; j < i; j++)
       {
        printf("%d",j);
       }
       
    }
    
}
