#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    
/*    //VAR
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);                      //&age means a pointer to age var.
    printf("Your are %d years old\n", age);

    //program 2 string var
*/
    char name[20];
    
    printf("Enter your name: ");
  //  scanf("%s", name);
    fgets(name, 20, stdin);
    printf("your name is %s", name);
return 0;
}
