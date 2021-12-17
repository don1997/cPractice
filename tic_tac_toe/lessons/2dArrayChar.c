//TASK: To how to search and display 2d array with char array
//PURPOSE: To learn these techniques above
//LINK:
//SUMMARY: THis is a copy of the previous 2Darray file. I just want to keep working files seperate when experimenting. 
//FINAL SUMMARY: Luckily it was smooth and updating the array to char was as simple
//as changing some data types around

//Note: I now have a proper program that takes a 2d char array and updates it withand searches, and prints it.
//I think I have officially completed the first stage of the program and can move on to the actual game logic part of tic tac toe.
#include<stdio.h>

const int M = 3;
 
void print(char (*arr)[M])
{
    int i, j;
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
 

int main()
{
    int userIN,userIN2;
    char arr[][3] = {{0, 1, 2}, {3, 4, 5}, {6 ,7 , 8}};
    
    print(arr);
	

    printf("\n");    
    
    printf("select row: ");
    scanf("%d", &userIN);

    printf("select Column: ");
    scanf("%d", &userIN2);

    UPDATE(arr, userIN, userIN2);
    
    print(arr);

    printf("\n");


    return 0;
}

