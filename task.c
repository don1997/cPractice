#include <stdio.h>
#include <stdlib.h>
 
// Renaming structure to avoid the
// repetitive use of struct keyword
typedef struct ToDo todo;
 
// Declaration of structure
struct ToDo {
    // char array as data part
    char buffer[101];
 
    // Pointer part to access addresses
    todo* next;
 
    // Count variable for counting
    // the number of nodes
    int count;
};
 
// Declare start pointer as null in
// the beginning
todo* start = NULL;

void interface()
{
    system("color 4F");
    printf("\n\n\n\n");
    printf("\t~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~\n");
    printf("\t~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~\n\n");
    printf("\t} : } : } : } : } : } "
           ": } : } : } :   "
           "WELCOME TO the TODO APP "
           "     : { : { : { : { : { "
           ": { : { : { : {\n\n");
    printf("\t~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~\n");
    printf("\t~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~~~~~~~~~~~~~~~"
           "~~~~~~~~~~\n");
    printf("\n\n\n\t\t\t\t\t\t\t"
           "t\t\t\t       "
           "@Sushant_Gaurav\n\n\n\n"
           "\n\n\n\t");
 
    // Pausing screen until user
    // presses any key
    system("pause");
}

// To view all the todos
void seetodo()
{
    // Clearing the console
    system("cls");
 
    // Pointer to the node for traversal
    todo* temp;
 
    // temp is made to point the
    // start of linked list
    temp = start;
 
    // Condition for empty linked list
    if (start == NULL)
        printf("\n\nEmpty ToDo \n\n");
 
    // Traverse until last node
    while (temp != NULL) {
 
        // Print number of the node
        printf("%d.)", temp->count);
 
        // Print data of the node
        puts(temp->buffer);
 
        // Clear output console
        fflush(stdin);
 
        // Going to next node
        temp = temp->next;
    }
 
    printf("\n\n\n");
    system("pause");
}

// Function to insert a node todo
void createtodo()
{
    // Choose choice from user
    char c;
 
    // Pointers to node
    todo *add, *temp;
    system("cls");
 
    // Infinite loop which will
    // break if "n" is pressed
    while (1) {
 
        printf("\nWant to add new ToDo ??"
               + " Press 'y' for Yes and 'n' "
               + " for No  :-)\n\t\t");
        fflush(stdin);
 
        // Input from user
        scanf("%c", &c);
 
        if (c == 'n')
            break;
        else {
 
            // If start node is NULL
            if (start == NULL) {
 
                // Dynamically allocating
                // memory to the newly
                // created node
                add = (todo*)calloc(1, sizeof(todo));
 
                // Using add pointer to
                // create linked list
                start = add;
                printf("\nType it.....\n");
 
                // Input from user
                fflush(stdin);
                gets(add->buffer);
 
                // As first input so
                // count is 1
                add->count = 1;
 
                // As first node so
                // start's next is NULL
                start->next = NULL;
            }
            else {
                temp = (todo*)calloc(1, sizeof(todo));
                printf("\nType it.....\n");
                fflush(stdin);
                gets(temp->buffer);
 
                // Insertion is at last
                // so pointer part is NULL
                temp->next = NULL;
 
                // add is now pointing
                // newly created node
                add->next = temp;
                add = add->next;
            }
 
            // Using the concept of
            // insertion at the end,
            // adding a todo
 
            // Calling function to adjust
            // the count variable
            adjustcount();
        }
    }
}

int main()
{
    int choice;
    interface();
 
    while (1) {
 
        // Change console color and
        // text color
        system("Color 3F");
 
        // Clear the console
        system("cls");
 
        printf("1. To see your ToDo list\n");
        printf("2. To create new ToDo\n");
        printf("3. To delete your ToDo\n");
        printf("4. Exit");
        printf("\n\n\nEnter your choice\t:\t");
 
        // Choice from the user
        scanf("%d", &choice);
    }

return 0;
}


