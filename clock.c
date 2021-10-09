#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#define GRN   "\x1B[32m"
#include<time.h>

int main()
{
    //VAR
    int hour, min, second;
    
    hour=min=second = 0;
    while(true){
        system("clear");
        second++;
        printf(GRN"%02d : %02d : %02d",hour,min,second);
        fflush(stdout); 
        
        if (second ==3) {

            min+=1;
            second=0;
        }
    
        if (min ==3){
            
            hour+=1;
            min = 0;
        }

        if (hour ==3){
            
            hour =0;
            min =0;
            second =0;
        } 

       sleep(1); 
    }
    return 0;
}
