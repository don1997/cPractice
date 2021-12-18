//LINKS: https://stackoverflow.com/questions/4594433/how-do-i-write-a-function-to-search-for-an-element-in-two-dimensional-array
//^^ This helped me fix constant return statment of 0 when return 0 was in for loop.
//
//
//SUMMARY: tic tac toe in c
//PURPOSE: To have additional experience with C and problem solving skills.
//DEADLINE: N/A
//LEARN: C 2D ARRAYS, C ARRAY FUNCTIONS, PASSING ARRAYS AS FUNCTIONS 


#include<stdio.h>

#include"includes/functions.h"
const int P = 3;

int main(void)
{
    	//VAR
    	int row, col;
	//INIT ARRAY
	char arr[] [3] = {

        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    
        };
	
	while(1){

		displayBoard(arr);
	    
        	printf("Select Row: ");
		scanf("%d", &row);
		printf("Select Column: ");
		scanf("%d", &col);

		UPDATE(arr, row, col);

		displayBoard(arr);
			
		int cont[P];
		int i;
        	printf("----------------------\n");
        	for(i = 0; i < P; i++){
                
                	cont[i] = arr[0][i];    

        	}
        
        	printf("array copied into another array: \n");
        	int winCounter = 0;
		for(i = 0; i < P; i++){
			//counter how many x's in the row.
			if(cont[i] == 'x'){
				
				winCounter++;
				//When number of x's is equal to 3. prints You win!
				if(winCounter == 3){

					printf("YOU WIN");

				}

			}
	
		}

		/*
		//prints contiainer array
		for(i = 0; i < P; i++){
        		if(cont[i] == 120){
				printf("%c", cont[i]);
			}
			else{

                		printf("%d", cont[i]);
			}
        	}
		*/
	printf("\n\n");

	
    	}//ENDWHILE


	
	return 0;
}
