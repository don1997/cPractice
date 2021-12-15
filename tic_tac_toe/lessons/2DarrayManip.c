#include<stdio.h>

#define MAX 3

int main(void)
{
	int i,j;
	//DECLARE
	//INIT ARRAY
	int arr[MAX] [MAX] = {

        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    
        };

	for(i = 0; i < MAX; i++){

		for(j = 0; j < MAX; j++){


			printf("%d", arr[i][j]);


		}
		printf("\n");

	}

	printf("----------------------\n");
	for(i = 0; i < MAX; i++){
	
		printf("%d", arr[i][0]);
		printf("\n");
	}
  	printf("----------------------\n");

  	for(i = 0; i < MAX; i++){
        
                printf("%d ", arr[0][i]);
        }

	int cont[MAX];

	printf("----------------------\n");
        for(i = 0; i < MAX; i++){
		
		cont[i] = arr[0][i];	

	}
	printf("----------------------\n");
	printf("array copied into another array: \n");
        for(i = 0; i < MAX; i++){
        
                printf("%d", cont[i]);
        }

	
return 0;
}
