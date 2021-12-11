//LINK: https://www.tutorialspoint.com/c-program-to-search-an-array-element-using-pointers
//TASK: Learn how to search in array when using pointers
//PURPOSE: Apparently passing arrays and searching inside of them was more complicated than
//I thought.
//To fix this i copied a program that does exactly that and modified so that I could uncerstand it
//and make it releavent to my project.

#include<stdio.h>
#define MAX 3
int i,l;

int search(int *,int);

int main(){
	int m; //element inputted to be searched
	int arr[MAX];

	//POPULATE array
	for(int i = 0; i < MAX; i++){

		arr[i] = i;
		
	}
   	printf("enter the element to be searched:");
   	scanf("%d",&m);

   	search(arr,m);
   return 0;
}

int search(int *arr,int m){
   
	for(i=0;i<MAX;i++){
      		
		if(m==arr[i]){
         	
		int ItisTrue=1;
         	break;
      		
		}
	}
	if(l==1){
		printf("%d is present in the array",m);
	} else {
	printf("%d is not present in the array",m);
   	}
}
