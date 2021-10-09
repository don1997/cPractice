#include<stdio.h>

int main(void)
{

    //VAR

    int i, c, a; 
    int digitArray[10];
    char cat;
    cat = '*';

    for (i = 0; i < 10; ++i){
        
        digitArray[i] = 0;
    }


    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9'){
            ++digitArray[c-'0'];
        
        }
    
    }
   

  //  printf("%d\n",digitArray[0]);
  
  
/*    for(i = 0; i < digitArray[0]; ++i){

        printf("%c", cat);
        
       
    }
    
    printf("\n");


    for(i = 0; i < digitArray[1]; ++i){                                       
 
          printf("%c", cat);   
    }

*/
    
    for (i = 0; i < 10; ++i){
        printf("%d\n", digitArray[i]);
    }





return 0;
}
