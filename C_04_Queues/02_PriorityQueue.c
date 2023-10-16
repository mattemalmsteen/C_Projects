//Priority Queue are special queue where the elements have a priority and they are placed in the queue in function of their priority

#include <stdio.h>
#include <stdlib.h>
// Queues - Linked List Implementation
struct node 
{
    int priority;
    int data;
    struct node* link;
} *front = NULL, *rear = NULL; // Pointers are declared globally

//Prototypes
void enqueue(int n, int priority);
int dequeue();
int peek();
void print();
int isEmpty();

void main()
{
    
    int choice, data, priority;
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
                printf("Enter its priority: ");
                scanf("%d", &priority);
                enqueue(data, priority);
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

void enqueue(int data, int priority)//in this case need to pass also the priority as argument
{
    //Here we need to check the value of the priority in order to find the correct position in the queue
    struct node* temp = NULL;//pointer to navigate the queue
    struct node* newNode = malloc(sizeof(struct node));//create the new node
    if(newNode == NULL)
    {
        printf("No memory space in the heap!");
        exit(1);
    }
    newNode->priority = priority;//assign the input priority to the priority field of the new node
    newNode->data = data;//assign the input data to the data field of the new node
    newNode->link = NULL;
    if(priority < front->priority)//check if  the front node has a lower priority
    {
        newNode->link = front;//in this case this new node becomes the front one
        front = newNode;
    }
    else if (isEmpty()){
        front = newNode;
        rear = newNode;
    }
    else
    {
        temp = front;//temp points to the first node
        while(temp->link != NULL && temp->link->priority <= priority)//test if at the end of the quque and if the temp->link->priority (the priority of the next node) has a priority higher or equal
            temp = temp->link;//traverse
        if (temp->link == NULL){//If we reach the end of the queue and there was no location to slot the priority node, place at the end            
            temp->link = newNode; //Change the link stored in the existing node to point to the newNode
            rear = newNode;// Make rear point to the new node at the end of the queue
        }else{
            newNode->link = temp->link;
            temp->link = newNode;//with this two lines add the new node between the node pointed by temp and the next one
        }
    }
}

int dequeue()//the high priority element is always removed first (because it is in the front of the queue), then the function is identical to the standard queue
{
    int data;
    struct node* temp;
    if(isEmpty())
    {
        printf("Queue Underflow!"); // Queue is empty
        exit(1);
    }
    temp = front;
    data = temp->data;
    front = front->link;
    free(temp);
    temp = NULL; 
    return data;   
}

int peek()//returns the value of the front node without removing it
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
    if(front == NULL)
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