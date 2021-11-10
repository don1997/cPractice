//reads and prints in an array

#include<stdio.h>

#define MAX_SIZE 1000 //max array size

int main(void)
{

    int arr[MAX_SIZE];  //declare an aray of max_size
    int i, N;
    
    //input array size
    printf("Enter size of array: ");
    scanf("%d", &N);
    
    //input elements in array
    printf("Enter %d elements in the array : ", N);
    for(i = 0; i < N; i++)
    {
    
        scanf("%d" , &arr[i]);
    }
    
    //prints all elements of array
    printf("\nElements in array are: ");
    for(i = 0; i < N; i++)
    {
        printf("%d, ", arr[i]);
    }


return 0;
}
