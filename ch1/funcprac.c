//SUMMARY: 
#include<stdio.h>
int areaOfRect(int length, int breadth) //formal parameter
{

    int area;
    area = length * breadth;
    return area;

}


int main(void)
{

    int l = 10, b = 5;
    
    int area = areaOfRect(l,b);   //actual paramter
    printf("%d\n", area);





return 0;
}
