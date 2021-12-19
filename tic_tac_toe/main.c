//LINKS: https://stackoverflow.com/questions/4594433/how-do-i-write-a-function-to-search-for-an-element-in-two-dimensional-array
//^^ This helped me fix constant return statment of 0 when return 0 was in for loop.
//
//
//SUMMARY: tic tac toe in c
//PURPOSE: To have additional experience with C and problem solving skills.
//DEADLINE: N/A
//LEARN: C 2D ARRAYS, C ARRAY FUNCTIONS, PASSING ARRAYS AS FUNCTIONS 

//problem: After implementing 2nd player turn into game some bugs have appeared:
//The player and computer can replace eachothers pieces on game.
//also i need to rethink the win system because i dont think 
//it works correctly. Because I need it to differentiate from player to Computer.
//solution: I need to make a way for the program to check if the coordinate
//is currently populated with an 'x' or an 'o'. If it is the rand functions should
//regenerate until there is a proper coordinate that is not currently populated with the things described above.
//
#include<stdio.h>
#include<stdlib.h>
#include"includes/functions.h"
const int P = 3;

int main(void)
{
	int compTURN = 0;
    	//VAR
	int gameON = 1;
    	int row, col;
	//INIT ARRAY
	char arr[] [3] = {

        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    
        };
	
	while(gameON){

		displayBoard(arr);
	    
        	printf("Select Row: ");
		scanf("%d", &row);
		printf("Select Column: ");
		scanf("%d", &col);

		UPDATE(arr, row, col);

		displayBoard(arr);
		int test = checkWin(arr);
		
		printf("%d\n", test);
		//Spacer
		printf("\n\n");
       		//Switch game off if condition met
		if(test != 0){

			gameON = 0;
			printf("player wins\n");
		}
		
		compTURN = 1;
		compMove(arr);
		checkWin(arr);
		if(test != 0 && compTURN == 1){


			gameON = 0;
			printf("comp wins\n");
		}
		//if test for win

    	}//ENDWHILE


	
	return 0;
}
