#include <stdio.h>
#include <stdlib.h>
// Queues - Linked List Implementation
struct node 
{
    int data;
    struct node* link;
} *front = NULL, *rear = NULL; // Pointers are declared globally
//Front points to the most left element, rear to the most right element

//Prototypes
void enqueue(int n);
int dequeue();
int peek();
void print();
int isEmpty();

void main()
{
    
    int choice, data;
    while(1)
    {
        printf("\n\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Print the first element\n");
        printf("4. Print all the elements\n");
        printf("5. Quit\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the element to be added in the queue: ");
                scanf("%d", &data);
                enqueue(data);
                printf("Element is added in the queue successfully.");
                break;
            case 2:
                data = dequeue();
                printf("Deleted element is: %d", data);
                break;
            case 3:
                printf("The first element of the queue is %d\n", peek());
                break;
            case 4: 
                print();
                break;
            case 5:
                exit(1);
            default:
                printf("Wrong choice.\n");
        }
    }


    printf("\n\n\n");
}

void enqueue(int n)//function to add an element to the queue
{
    //any new element is attached at the end of the queue (after the node pointed by rear)
    struct node* temp;
    temp = malloc(sizeof(struct node));
    if(temp == NULL)
    {
        printf("No memory space in the heap!");
        exit(1);
    }
    temp->data = n;
    temp->link = NULL;

    if(rear == NULL)//this means that the queue is empty (to exists a queue needs to have front AND rear pointing to something)
        front = rear = temp;//in case of empty queue, rear and front will point to the same single node just added with temp pointer
    else 
    {
        rear->link = temp;//create connection between rear node and temp node
        rear = rear->link;//assign the pointer rear to the new node
    }
}

int dequeue()//function to remove an element from the queue returning the value of the deleted node
{
    //from a queue the element to output first is the one pointed by front
    int data;
    struct node* temp;
    if(isEmpty())
    {
        printf("Queue Underflow!"); // Queue is empty
        exit(1);
    }
    temp = front;//temp is now pointing to the front node (which has to be removed)
    data = temp->data;//take the data stored in the node to remove
    front = front->link;//move front to the next right element
    free(temp);//remove the old front node, still pointed by temp
    temp = NULL; 
    return data;//return the data of the deleted node   
}

int peek()
{
    if(isEmpty())
    {
        printf("Queue Underflow!"); // Queue is empty
        exit(1);
    }
    return front->data;
}

int isEmpty()
{
    if(front == NULL)//same concept as explained in enqueue function
        return 1;
    else 
        return 0;
}

void print()
{
    struct node* temp;
    temp = front;
    if(isEmpty())
    {
        printf("Queue Underflow."); // Queue is empty
        exit(1);
    }
    printf("Queue: \n");
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}