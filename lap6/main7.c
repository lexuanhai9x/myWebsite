#include <stdio.h>
int main()
{
 int i, a;
 i = 0;
 a = 10;
 while(i < 100 && a > 5)
 {
    printf("hello world\n");
 i++;
 a-= 2;
 }
}