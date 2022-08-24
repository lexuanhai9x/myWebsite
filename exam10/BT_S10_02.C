#include <stdio.h>
int main(){
    int i,j,k=11;
    for ( i = 1; i < k; i++)
    {
        printf("\n");
        for (j = 1; j < i; j++)
        {
            printf("%d",j);
        } 
    }
}