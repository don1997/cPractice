//SUMMARY: Rewrite temp program to use functions

#include<stdio.h>
float tempConvert(float a)
{

    
    float  celsius;
    
    celsius = (5.0/9.0) * (a - 32.0);

    return celsius;

}                  


int main(void)
{
    float fahr, ceclsius, convert;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper){

    convert = tempConvert(fahr);
    printf("%f\t %f\n", fahr, convert);
    fahr = fahr + step;

    }
    


return 0;
}
