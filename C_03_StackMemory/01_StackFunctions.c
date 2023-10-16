#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
} *top = NULL; //global variable for the top of the stack

void push(int data);//function to push in a new node
int pop();//function to pop out a node
int isEmpty();//function to check if the list is empty
int tos(); //function returns the top of stack value
void print(); //func to print the list

void main(){

    int choice, data;
    while (1){//while 1 loop: it loop again and again until the user enter 5-->exit
        printf("1. Push function\n");
        printf("2. Pop function\n");
        printf("3. Printf TOS\n");
        printf("4. Print all stack data\n");
        printf("5. Quit\n");
        printf("Please enter your choice: ");
        scanf(" %d", &choice);

        switch(choice){
            case 1:
                printf("Enter the element to be push: ");
                scanf(" %d", &data);
                push(data);
                break;
            case 2:
                printf("Deleted element %d\n", pop());
                break;
            case 3:
                printf("The top of stack is: %d\n", tos());
                break;
            case 4:
                printf("The stack elements are: ");
                print();
                break;
            case 5:
                exit(0);
            default:
                printf("Wrong choice.\n");
        }
        printf("\n");
    }
}


void push(int data){
    struct node *newNode;
    newNode = malloc(sizeof(newNode));
    if (newNode == NULL){//malloc return null when the requested memory cannot be allocated--> overflow
        printf("Stack Overflow");
        exit(1);// interrupt the execution of the program if there is a fail
    }

    //initizalize the newNode:
    newNode->data = data;
    newNode->link = NULL;

    //This new node, is the last inserted in the stack, then it should be pointed by *top
    newNode->link = top;//link the new node to the last one in the stack
    top = newNode;//change the TOP stack to this node
    //no need to return top, because it lives in global memory, then it is accessible by all the function directly
}


int pop(){
    struct node *temp = top; //declare and init a pointer which points to the first node

    //Testing as always:
    if(isEmpty()){
        printf("Stack underflow, empty list!");
        exit(1);
    }
    int val = temp->data;
    top = top->link;
    free(temp);
    temp = NULL;
    return val;
}

int isEmpty(){//check if the list is empty
    if (top == NULL){
        return 1;
    }else{
        return 0;
    } 
}

int tos(){
    if(isEmpty()){
        printf("Stack underflow");
        exit(1);
    }
    return top->data;//this function just returns the data in the node at the top of the stack (tos)
}

void print(){
    struct node *temp = top;
    printf("The stack elemets are: ");
    while(temp != NULL){//I could also write just (temp), it is the same because when it's null there is no data and the condition becomes 0
        printf(" %d", temp->data);
        temp = temp->link;
    }
    printf("\n");
}
