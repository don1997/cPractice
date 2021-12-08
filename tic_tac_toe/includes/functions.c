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
		printf("%d",ARR[x][y]);
		if(ARR[x][y] == select){
			
			return 1;

		}
		else{

			return 0;
		}

	}

    }


}

//Checks to see if selection matches searchVAL
/*
 * void selection(){

    if(select == searchVAL ){

	        

    }
}
*/
