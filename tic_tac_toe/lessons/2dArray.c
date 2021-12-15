//TASK: To how to search and display 2d array
//PURPOSE: To learn these techniques above
//LINK: https://www.geeksforgeeks.org/pass-2d-array-parameter-c/
//SUMMARY: performing these 2 tasks was a challenge for me since doing it 
//for 1d arrays was simpler and the approach has some extra steps
//Luckily I managed to find a good resource to learn it
//NEXT STEPS: Next steps are to update a 2D array and the implement the core functions into the actual program.

#include<stdio.h>

const int M = 3;
 
 
void print(int (*arr)[M])
{
    int i, j;
    for (i = 0; i < M; i++)
    for (j = 0; j < M; j++)
        printf("%d ", arr[i][j]);
}
 
void SEARCH(int(*arr)[M], int in){

	int i, j;

	for (i = 0; i < M; i++){
		
		for(j= 0; j<M;j++){
		
			if(in == arr[i][j]){
				
				printf(" FOUND");

			}

		}

	}

}
int main()
{
    int userIN;
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    print(arr);
    
    printf("select: ");
    scanf("%d", &userIN);
    SEARCH(arr, userIN);
    return 0;
}

