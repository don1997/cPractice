#include<stdio.h>
#include"functions.h"

void displayBoard(){
    //INIT 2D array
    int arr[3] [3] = {

        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    
    };
    //counter vars
    int i, j;
    //DISPLAY 2D array
    for(i = 0; i < 3; i++){
        printf("---------\n");
        for(j = 0; j < 3; j++){
            
            printf("|%d|", arr[i][j]);
                    

        }
        printf("\n");
    }
    printf("---------\n");

}//ENDFUNC

//searches 2D array value
void search(){
    int x,y;

    for(x = 0; j < 3; j++){
        
        

    }


}


//Checks to see if selection matches searchVAL
void selection(int select){

    if(select == searchVAL ){

        

    }
}
