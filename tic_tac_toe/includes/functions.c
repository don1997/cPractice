#include<stdio.h>
#include<stdbool.h>
#include"functions.h"

void displayBoard(int ARR[MAX][MAX]){
    //counter vars
    int i, j;
    //DISPLAY 2D array
    for(i = 0; i < MAX; i++){
        printf("---------\n");
        for(j = 0; j < MAX; j++){
            
            printf("|%d|", ARR[i][j]);
                    

        }
        printf("\n");
    }
    printf("---------\n");

}//ENDFUNC

//searches 2D array value
int search(int ARR[MAX][MAX],int select){
	int x,y;

	for(x = 0; x < MAX; x++){
        
        	for(y = 0; y < MAX; y++){
		
			if(select == ARR[x][y]){
				//Update array with selection
				int *ptr = update(ARR,select);
				displayBoard(ARR);
				//How to return?
				return 1;

			}

		}

    	}
	//ELSE
	return 0;
}//ENDFUNC

//Checks to see whether selected item exists, if it does it updates array with 
//new value
//if not it moves on.

int* update(int *array,int select){
	
	int i;

	array[0][0] = select;

	return array;
	
}

