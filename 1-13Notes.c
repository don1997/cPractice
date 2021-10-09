#include<stdio.h>

int main(void)
{
    int i;
    int ndigit[10];
   
     for (i = 0; i < 10; ++i){     //Assigns each element in array ndgiti with a 0.
        ndigit[i] = 0;
    }   

    for (i = 0; i < 10; ++i){
        printf(" %d", ndigit[i]);  //Prints out an array with loop of each value. 
    }//endfor

return 0;
}
