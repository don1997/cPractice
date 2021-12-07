//SUMMARY: demo program in section 1.7 to explain functions. Power function

#include<stdio.h>

    //function declaration
    int power(int m, int n);

// test power function

int main(void)
{

    int i;

    for (i = 0; i < 10; ++i){
    
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    }

return 0;
}

//power: raise base to n-th power; n >= 0
//function defintion
int power(int base, int n)
{

    int i, p;

    p = 1;

    for(i = 1; i <= n; ++i){
    
        p = p * base;

    }

return p;
}