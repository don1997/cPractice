//SUMMARY: Displays range for shrt,long, char, int both unsigned and signed.


#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void)
{
    int unsign = 0;

    int a,b,c,d,e,f,j,k,l;
    a = UCHAR_MAX;
    b = CHAR_MIN;
    c = CHAR_MAX;
    
    d = USHRT_MAX;
    e = SHRT_MIN;
    f = SHRT_MAX;
    
    long g = ULONG_MAX;
    long h = LONG_MIN;
    long i = LONG_MAX;
    
    j = UINT_MAX;
    k = INT_MIN;
    l = INT_MAX;
    

    printf("unsinged char:\t\t %d to %d\n", unsign, a);
    printf("signed char:\t\t %d to %d\n", b , c);   
    printf("unsigned short:\t\t %d to %d\n", unsign, d);   
    printf("signed short:\t\t %d to %d\n",e , f);   
    printf("unsinged long:\t\t %d to %lu\n", unsign, g);   
    printf("signed long:\t\t %ld to %ld\n",h , i);   
    printf("unsinged int:\t\t %d to %u\n", unsign, j);   
    printf("signed int:\t\t %d to %d\n",k , l);   



return 0;
}
