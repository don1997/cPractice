//TASK: To how to search and display 2d array
//PURPOSE: To learn these techniques above
//LINK: https://www.geeksforgeeks.org/pass-2d-array-parameter-c/
//SUMMARY: performing these 2 tasks was a challenge for me since doing it 
//for 1d arrays was simpler and the approach has some extra steps
//Luckily I managed to find a good resource to learn it
//NEXT STEPS: Next steps are to update a 2D array and the implement the core functions into the actual program.
//FINAL SUMMARY: I have managed to complete adding an UPDATE functions. I will keep this copy as reference since it works. For the next copy I will 
//convert the arrays to char since tic tac toe requires x's and o's in order to play the game correctly.
#include<stdio.h>

const int M = 3;
 
void print(int (*arr)[M])
{
    int i, j;
    for (i = 0; i < M; i++){
    	for (j = 0; j < M; j++){
     
		printf("%d ", arr[i][j]);
    	}
	printf("\n");
    }
printf("\n");
}
 
int SEARCH(int(*arr)[M], int in){

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

void UPDATE(int(*arr)[M], int in, int in2){

        if(SEARCH(arr, in) == 1){


       		 arr[in][in2] = 101; 
        }
	else{

		printf("Not found");
	}
}
 

int main()
{
    int userIN,userIN2;
    int arr[][3] = {{0, 1, 2}, {3, 4, 5}, {6 ,7 , 8}};
    
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

