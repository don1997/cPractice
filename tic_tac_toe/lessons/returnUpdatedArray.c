
//LINK: https://www.geeksforgeeks.org/return-local-array-c-function/
//TASK: Return updated array in c
//PURPOSE: To learn how to perform update array function in c for project
#include<stdio.h>
#define MAX 3

// | | | DO NOT DO THIS!!!! | | |
// V V V	            v v v

//int* funWRONG()
//
// {
//
//	int arrB[100];
//
//	arr[0] = 10;
//	arr[1] = 20;
//
//	return arrB;
// } 
//
// ^ ^ ^ DO NOT DO THIS!!!! ^ ^ ^

int* fun(int *arr, int select)
{
	//search for value
	for(int i = 0; i < MAX; i++){

		if(select == arr[i]){

			printf("IT WORKS");
            break;
		}

	}

//	return arr;

}




int main(void)
{
	//counter var
	int i, userIN;

	int arr[MAX];
	//POPULATE ARRAY
	for(i = 0; i < MAX; i++){

		arr[i] = i;

	}

	printf("Make a selection: ");
	scanf("%d", &userIN);			//<<<------- IMPORTANT: removing the address operator was causing the seg fault error.

	int *ptr = fun(arr, userIN);

	//DISPLAY array
	for(i = 0; i < MAX; i++){

		printf("%d  ", arr[i]);

	}


return 0;
}
