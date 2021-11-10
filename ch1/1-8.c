#include<stdio.h>

int main()
{

    int c, nl, tab, space;

    nl = 0;

    tab = 0;
    
    while ((c = getchar()) != EOF){
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++tab;
        if (c == ' ')
            ++space;
        printf("The number of lines is: %d and the number of tabs is: %d the number of spaces is %d\n", nl, tab, space);
    }
    
            






return 0;
}
