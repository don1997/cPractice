#include<stdio.h>
#include"functions.h"
#include<stdlib.h>
const int M = 3;

void displayBoard(char (*arr)[M]){
    int i, j;
     printf("-----------\n");    

    for (i = 0; i < M; i++){
        for (j = 0; j < M; j++){
                if(arr[i][j] == 120){
 
                        printf("|%c| ", arr[i][j]);
                }
		else if(arr[i][j] == 111){       
                        
                        printf("|%c| ", arr[i][j]);
                }       

                else{  
			printf("|.| ");
			//print numbers to board
                        //printf("|%d| ", arr[i][j]);
                }
        }
        printf("\n");
	printf("-----------");
	printf("\n");
    }//ENDFOR
printf("\n");
}
   

int SEARCH(char(*arr)[M], int in){

        int i, j;

        for (i = 0; i < M; i++){
                
                for(j= 0; j<M;j++){
                
                        if(in == arr[i][j]){
                                return 1;
                                printf(" FOUND");

                        }

                }

        }
        return 0;
}

void UPDATE(char(*arr)[M], int in, int in2){

//        if(SEARCH(arr, in) == 1){


                 arr[in][in2] = 'x'; 
        /*
        }
       else if(SEARCH(arr,in) == 0){

                printf("jackshit\n");
        }
        else{

                printf("Not found\n");
        }
    */
}

int checkWin(char(*arr)[M]){
	
        //check for winner row
        for(int i = 0; i < M; i++){
                
                if(arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2]){


                        return 1;

                }

        }
        //check for winner column
        for(int i = 0; i < M; i++){
                
                if(arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i]){

		
			return 1;
	
                }

        }

	return 0;
}

int randNUM(){

	int a = rand()  % 3;
	return a;

}
void compMove(char(*arr)[M]){

	int works = 1;
	//update
	while(works){
	//assign
	int compRow = randNUM();
	int compCol = randNUM();
		if(arr[compRow][compCol] == 120){

			continue;
	
		}
		else if(arr[compRow][compCol] == 111){

			continue;
	
		}
		else{

			arr[compRow][compCol] = 'o';
			works = 0;
		}
	}//ENDWHILE
	
}	
