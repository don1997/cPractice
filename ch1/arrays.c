#include<stdio.h>

int main(void)
{
    
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i){                   //used to print out 0 0 0  0 0 0 0 0
        ndigit[i] = 0;
    }
    
    while ((c = getchar()) != EOF){             //used to get val of ndigit
        if (c >= '0' && c <= '9'){
            ++ndigit[c-'0'];
        }//endif
        else if (c == ' '|| c == '\n' || c == '\t'){
                ++nwhite;
        }//endif
        else{
            ++nother;
        }

    }//endwhile



    printf("digits =");
    for (i = 0; i < 10; ++i){
        printf(" %d", ndigit[i]);
    }//endfor

    printf(", white space = %d, other = %d\n", nwhite, nother);
return 0;
}

