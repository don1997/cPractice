//LINKS: https://stackoverflow.com/questions/4594433/how-do-i-write-a-function-to-search-for-an-element-in-two-dimensional-array
//^^ This helped me fix constant return statment of 0 when return 0 was in for loop.
//
//
//SUMMARY: tic tac toe in c
//PURPOSE: To have additional experience with C and problem solving skills.
//DEADLINE: N/A
//LEARN: C 2D ARRAYS, C ARRAY FUNCTIONS, PASSING ARRAYS AS FUNCTIONS 


#include<stdio.h>
#include<stdbool.h>

#include"includes/functions.h"
int main(void)
{
	//INIT ARRAY
	int arr[MAX] [MAX] = {

        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    
        };

    	int selectIN, result;
	    int decision;
	displayBoard(arr);
    
        printf("Make a selection on the board: ");
    	scanf("%d", &selectIN);
	
	decision = search(arr,selectIN);
    	printf("%d\n", decision);


	
return 0;
}
