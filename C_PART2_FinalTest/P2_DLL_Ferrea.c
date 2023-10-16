#include <stdio.h>
#include <stdlib.h>
// Implementation of a Doubly Linked list
struct node {
	struct node* prev;
	int data;
	struct node* next;
};


void print_DLL(struct node** head);
void searchEl(struct node **head);
void delEl(struct node **head);
void delFirst(struct node **head);
void sort(struct node **head);

int main()
{
    int choice;
    struct node* head = (struct node *)malloc(sizeof(struct node));
    struct node* n1 = (struct node *)malloc(sizeof(struct node));
    struct node *n2 = (struct node *)malloc(sizeof(struct node));
    struct node *n3 = (struct node *)malloc(sizeof(struct node));
    struct node *n4 = (struct node *)malloc(sizeof(struct node));

	head->prev = NULL;
	head->data = 45;
	head->next = n1;

	n1->prev = head;
	n1->data = 78;
	n1->next = n2;

	n2->prev = n1;
	n2->data = 94;
	n2->next = n3;

	n3->prev = n2;
	n3->data = 35;
	n3->next = n4;

	n4->prev = n3;
	n4->data = 23;
	n4->next = NULL;
    

    printf("\n1. Display the list");
    printf("\n2. Search an element to get his position");
    printf("\n3. Delete an element at indicated position");


    printf("\nEnter your choice: ");
    scanf(" %d", &choice);

    switch(choice){
        case 1:
            print_DLL(&head);
            break;
        case 2:
            searchEl(&head);
            break;
        case 3:
            delEl(&head);
            print_DLL(&head);
            break;
        default:
            printf("\nInvalid input");
    }
}

void print_DLL(struct node** head)
{
    printf("The DL list is:\n");
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
        printf("\n");
    
}

void searchEl(struct node **head){
    int value;
    printf("\nEnter the value to search: ");
    scanf(" %d", &value);
    struct node *ptr;
    ptr = *head;
    int count = 0;
    while(ptr != NULL){
        if (ptr->data == value){
                printf("\nThe element is at position %d", count + 1);
                return;
        }else{
            ptr = ptr->next;
            count++;
        }
    }
    printf("Value not found!");
    return;
}

void delEl(struct node **head){
    int pos;
    printf("\nEnter the position of the element to delete: ");
    scanf(" %d", &pos);
        
    struct node *ptr;
    ptr = *head;

    if (pos == 1)
    {
        delFirst(head);
    }

    while(pos > 1)
    {
        ptr = ptr->next;
        pos--;
    }
    ptr->prev->next = ptr->next;
    ptr->next->prev = ptr->prev;
    free(ptr);
    ptr = NULL;
}

void delFirst(struct node** head){
    struct node *ptr;
    ptr = *head;    
    ptr = ptr->next;
    free(ptr->prev);
    ptr->prev = NULL;
    *head = ptr;
    ptr = NULL;
}

void sort(struct node **head){
    
}