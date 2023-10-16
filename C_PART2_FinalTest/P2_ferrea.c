#include <stdio.h>
#include <stdlib.h>
// Implementation of a Doubly Linked list
struct node {
	struct node* prev;
	int data;
	struct node* next;
};

// Inserting a node in an empty list
void addToEmpty(struct node** head, int data);
// Inserting a node at the beginning of a doubly linked list
struct node* addAtBeg(struct node* head, int data);
// Inserting a node at the end of a doubly linked list
void addAtEnd(struct node** head, int data);
// Inserting a node in between nodes of a doubly linked list
struct node* addAfterPos(struct node* head, int data, int position);
// Inserting a node in between nodes of a doubly linked list
struct node* addBeforePos(struct node* head, int data, int position);
// Create an entire DLL
void create_DLL(struct node** head);
// Deleting the first node of a DLL
struct node* delFirst(struct node* head);
// Deleting the last node of a DLL
struct node* delLast(struct node* head);
// Deleting the intermediate node of a DLL
struct node* delInter(struct node* head, int position);
// Reversing a DLL
struct node* reverse_DLL(struct node* head);
// Printing a Doubly linked List
void print_DLL(struct node** head);

int main()
{
    printf("\n\n\n");
	struct node* head = NULL;
    struct node* ptr;
    create_DLL(&head);
    print_DLL(&head);


    /*head = delInter(head, 1);
    print_DLL(head);
    head = delInter(head, 5);
    print_DLL(head);
    head = delInter(head, 3);
    print_DLL(head);*/

	/*
    head = addToEmpty(head, 45);
    head = addAtBeg(head, 34);
    head = addAtEnd(head, 9);
    head = addAfterPos(head, 777, 3);
    head = addBeforePos(head, 333, 4);
    head = addBeforePos(head, 456, 1);

    head = delFirst(head);
    print_DLL(head);

    head = delLast(head);
    print_DLL(head);
    */    
    printf("\n\n\n");
    return 0;
}

// Inserting a node in an empty list
void addToEmpty(struct node** head, int data)
{
    printf("Inserting a node in an empty list\n");
	struct node* temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	*head = temp;
}


// Inserting a node at the end of a doubly linked list
void addAtEnd(struct node** head, int data)
{
    printf("Inserting a node at the end of a Doubly Linked List\n");
	struct node *temp, *tp;
    temp = malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
    tp = *head;
    while(tp->next != NULL)
        tp = tp->next;
    tp->next = temp;
    temp->prev = tp;
}



// Create an entire DLL
void create_DLL(struct node** head)
{
    int n, data, i;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    if (n == 0)    
    printf("Enter the element for node 1: ");
    scanf("%d", &data);
    addToEmpty(head, data);

    for (i=1; i<n; i++)
    {
        printf("Enter the element for the node %d: ", i+1);
        scanf("%d", &data);
        addAtEnd(head, data);
    }
}

// Printing a Doubly linked List
void print_DLL(struct node** head)
{
    printf("Printing the Doubly Linked List\n");
    struct node* ptr;
    ptr = *head;
    if(ptr == NULL)
        printf("List is empty!");
        else
        {
            while(ptr != NULL)
            {
                printf("%d ", ptr->data);
                ptr = ptr->next;
            }
        }
        printf("\n"); // new line
    
}

