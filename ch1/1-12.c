#include<stdio.h>

#define IN 1 //inside a word
#define OUT 0 //outside a word

// count lines words and character in input

int main(void)
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF){
            if (c == ' ' || c == '\t'){
                state = OUT;
            }
            else{
                state = IN;
            } 
            
            if (state == OUT){
                printf("%c\n", c);
            } 
 
            if (state == IN){
                printf("%c", c);
            }
    }

return 0;
}
