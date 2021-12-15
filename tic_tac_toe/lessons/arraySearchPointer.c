//LINK: https://www.tutorialspoint.com/c-program-to-search-an-array-element-using-pointers
//TASK: Learn how to search in array when using pointers
//PURPOSE: Apparently passing arrays and searching inside of them was more complicated than
//I thought.
//To fix this i copied a program that does exactly that and modified so that I could uncerstand it
//and make it releavent to my project.



//INTERMEDIATE SUMMARY: This takes a 1D array. allows user to make an input. The input is searched and if found is updated with 111.
//NEXT STEP-> To replace with char data type so the array displays an x or some other character instead.
//RESULTS: This took a while but i managed to solve it. Go down to code arrow
#include<stdio.h>
#define MAX 9
int i, j;
int search(char *,int, int );
void update(char *, int, int);
//void display();

int main(){
    int x,y;
	int row, column; //element inputted to be searched
	

	//POPULATE array
	char arr[MAX][MAX] = {1,2,3
                        ,4,5,6,
                         7,8,9};
    
    
    //USER selection
   	printf("enter the row and column to be searched: ");
   	scanf("%d%d",&row,&column);

   	update(arr,row,column);
   
    //DISPLAY array
	for(x = 0; x< MAX; x++){
		for(y = 0; y < MAX; y++){

        	if(arr[x][y] == 120){          //<<------ IMPORTANT: allows to display
                                    //both integer values in array
            	printf("%c ", arr[x][y]);  // and character values
                                           // at the same time. THe reason for 
                                          //arr[i] == 120 is because 120 is 'x' in
                                         // ACII code. So its saying if 
                                        // the array element equals x in ascii
        	}
        	else
        	{

        	printf("%d ", arr[x][y]);
        
        	}                          //<<------ IMPORTANT:  
    		}
	}
    printf("\n");    
    
    return 0;
}

//Search for element in array and return 1 if found
int search(char *arr,int FUNrow, int FUNcol){
	for(i=0;i<MAX;i++){
        	for (j= 0; j < MAX; j++){
  		
			if(FUNrow==arr[i] && FUNrow == arr[j]){
         	
            		return 1;
      		
		}
	}
	printf("is not present in the array");
	}	
}
//if searched element in array is found. Replace that element with 'x'
void update(char *arr, int FUNrow, int FUNcol){
    
	if(search(arr, FUNrow, FUNcol) == 1){

        	arr[i][j] = 'x';
		
	}
}


