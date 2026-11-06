#include <stdio.h>
#include <stdlib.h>
 

void push(int [], int *, int, int);
void pop(int [], int *);
void display(int [], int);
 
 
int main()
{
    int size;
 
   
    printf("Enter number of parcels: ");
    scanf("%d", &size);
 
   
    int *stack = malloc(sizeof(int) * size);
 
   
    int top = -1;
 
    int choice;
    int parcelID;
 
 
    while (1)
    {
        printf("\n--- Parcel Storage System ---\n");
        printf("1. Add Parcel (Push)\n");
        printf("2. Remove Parcel (Pop)\n");
        printf("3. Display Parcels\n");
        printf("4. Exit\n");
 
        printf("Enter your choice: ");
        scanf("%d", &choice);
 
       
        switch (choice)
        {
            case 1:
                
                printf("Enter Parcel ID to add: ");
                scanf("%d", &parcelID);
 
               
                push(stack, &top, size, parcelID);
                break;
 
            case 2:
               
                pop(stack, &top);
                break;
 
            case 3:
               
                display(stack, top);
                break;
 
            case 4:
               
                printf("Exiting Parcel Storage System...\n");
                free(stack);
                exit(0);
 
            default:
                
                printf("Invalid choice! Please try again.\n");
        }
    }
 
    return 0;
}
 
 

void push(int stack[], int *top, int size, int parcelID)
{
    
    if (*top == size - 1)
    {
        printf("Stack Overflow! Cannot add more parcels.\n");
    }
    else
    {
        
        (*top)++;
 
        stack[*top] = parcelID;
 
        printf("Parcel ID %d added to the stack.\n", parcelID);
    }
}
 
 

void pop(int stack[], int *top)
{
   
    if (*top == -1)
    {
        printf("Stack Underflow! No parcels to remove.\n");
    }
    else
    {
        printf("Parcel ID %d removed from stack.\n",
               stack[*top]);
 
        (*top)--;
    }
}
 
 

void display(int stack[], int top)
{
    
    if (top == -1)
    {
        printf("Stack is empty. No parcels in storage.\n");
    }
    else
    {
        printf("Parcels currently in storage:\n");
 
      
        for (int i = top; i >= 0; i--)
        {
            printf("Parcel ID: %d\n", stack[i]);
        }
    }
}
