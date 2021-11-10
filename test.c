#include <stdio.h>
#include <curses.h>
 
int main()
{
    /* Variable to store keypress */
    int x;
 
    /* Clear Screen */
    clrscr();
    bgcolor(0);
    bordercolor(5);
    textcolor(4);
 
    /* Print Hello World */
    gotoxy(10,10);
    printf("Hello World\n");
 
    /* Wait for keypress */
    x  = getchar(); 
     
    return(0);
}
