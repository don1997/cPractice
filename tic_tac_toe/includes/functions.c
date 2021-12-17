#include<stdio.h>
#include"functions.h"
const int M = 3;

void displayBoard(char (*arr)[M]){
    int i, j;
     printf("-----\n");    

    for (i = 0; i < M; i++){
        for (j = 0; j < M; j++){
                if(arr[i][j] == 120){
 
                        printf("%c ", arr[i][j]);
                }
                else{   
                        printf("%d ", arr[i][j]);
                }
        }
        printf("\n");
	printf("-----");
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

        if(SEARCH(arr, in) == 1){


                 arr[in][in2] = 'x'; 
        }
        else{

                printf("Not found");
        }
}

