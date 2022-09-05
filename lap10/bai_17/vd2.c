#include <stdio.h>
void main()
{
char name[20];
/* name is declared as a single dimensional character
 array */
system("cls"); /* Clears the screen */
printf("Enter your name: "); /* Displays a message */
scanf("%s", name); /* Accepts the input */
printf("Hi there: %s", name); /* Displays the input */
getch();
}
