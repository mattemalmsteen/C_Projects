/*
Add a node to a linked list in certain position
*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void printf_data(struct node *head);
void count_nodes(struct node *head);
void add_node(struct node *head, int data, int pos);

int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL; 

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;

    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current;

    int pos = 3;

    count_nodes(head);
    printf_data(head);
    add_node(head, 35, pos);
    count_nodes(head);
    printf_data(head);

    return 0;
}

void count_nodes (struct node *head) //we pass to the function head (a pointer)
{
    int count = 0;
    if (head == NULL){
        printf("List empty\n");
    }
    else{
        struct node *ptr = NULL;//create a local pointer ptr
        ptr = head; //ptr points to the first node in the list
        while (ptr != NULL)
        {
            count++;
            ptr = ptr->link;//move ptr to the NEXT NODE. If the ptr is NULL, we are at the end of the list, then exit the while loop e stop counting 
        }
        printf("Count: %d\n", count);
    }
}

//function to print the content of the linked list
void printf_data(struct node *head){
    if (head == NULL){
        printf("List empty\n");
    }else{
        struct node *ptr = NULL; //create local pointer
        ptr = head; //assaing it head
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);//printf the content
            ptr = ptr->link;//move to the next element
        }
        
    }
}


void add_node(struct node *head, int data, int pos){//funzione che restituisce un type struct node*
    struct node *ptr1 = head;
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;

    pos--;//because we have 3 nodes(?)
    while(pos != 1){
        ptr1 = ptr1->link;
        pos--;
    }
    ptr2->link = ptr1->link;
    ptr1->link = ptr2;
}