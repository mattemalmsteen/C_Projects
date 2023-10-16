/*//reverse stack elements (use two temporary stack)
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void push(struct node **head, int data);
int pop(struct node ** head);//function to pop out a node
int isEmpty(struct node *head);//function to check if the list is empty
int tos(struct node * head); //function returns the top of stack value
void print(struct node *head); //func to print the list
struct node *copy(struct node *head);
int count_nodes(struct node *head);

void main(){

    struct node *top, *temp1, *temp2;
    int choice, data;
    while (1){//while 1 loop: it loop again and again until the user enter 5-->exit
        printf("1. Push function\n");
        printf("2. Pop function\n");
        printf("3. Printf TOS\n");
        printf("4. Print all stack data\n");
        printf("5. Reverse the stack\n");
        printf("6. Quit\n");
        printf("Please enter your choice: ");
        scanf(" %d", &choice);

        switch(choice){
            case 1:
                printf("Enter the element to be push: ");
                scanf(" %d", &data);
                push(&top, data);
                break;
            case 2:
                printf("Deleted element %d\n", pop(top));
                break;
            case 3:
                printf("The top of stack is: %d\n", tos(top));
                break;
            case 4:
                printf("The stack elements are: ");
                print(top);
                break;
            case 5:
                top1 = copy(top);
                top2 = copy(top1);
                top = copy(top2);
                break;
            case 6:
                exit(0);
            default:
                printf("Wrong choice.\n");
        }
        printf("\n");
    }
}


void push(struct node ** head, int data){
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
    newNode->link = *head;//link the new node to the last one in the stack
    *head = newNode;//change the TOP stack to this node
    return;
}

int pop(struct node *head){
    struct node *temp = head; //declare and init a pointer which points to the first node

    //Testing as always:
    if(isEmpty(head)){
        printf("Stack underflow, empty list!");
        exit(1);
    }
    int val = temp->data;
    head = head->link;
    free(temp);
    temp = NULL;
    return val;
}

int isEmpty(struct node *head){//check if the list is empty
    if (head == NULL){
        return 1;
    }else{
        return 0;
    } 
}

int tos(struct node *head){
    if(isEmpty(head)){
        printf("Stack underflow");
        exit(1);
    }
    return head->data;//this function just returns the data in the node at the top of the stack (tos)
}

void print(struct node *head){
    struct node *temp = head;
    printf("The stack elemets are: ");
    while(temp != NULL){//I could also write just (temp), it is the same because when it's null there is no data and the condition becomes 0
        printf(" %d", temp->data);
        temp = temp->link;
    }
    printf("\n");
}
*/