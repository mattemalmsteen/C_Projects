/*
Add a node to a linked list*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void printf_data(struct node *head);
void count_nodes(struct node *head);
void add_at_end(struct node *head, int data);
struct node *add_at_beg(struct node *head, int data);
void add_at_beg2(struct node **head, int data);

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

    count_nodes(head);
    printf_data(head);
    add_at_beg2(&head, 894);
    count_nodes(head);
    printf_data(head);
    add_at_end(head, 6733);
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
void add_at_end(struct node *head, int data){
    struct node *ptr, *temp; //declare two pointers of type struct node
    ptr = head;

    temp = (struct node *)malloc(sizeof(struct node));//create a temporary node with the data to attach to the linked list
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL){ //with this loop I check if we reached the last element of the list which has NULL link pointer
        ptr = ptr->link;//this move ptr to the next node
    }
    ptr->link = temp;// if we are at the last node, we can pass to ptr (that is at the last element's link field) the address of node temp, linking it to the list
}


struct node* add_at_beg(struct node *head, int data){//funzione che restituisce un type struct node*
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = data;//the data on the left is related to the struct type, the data on the right is related to the input argument of the funcion
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head;
}

//alternative method:
void add_at_beg2(struct node** head, int data){
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = data;//the data on the left is related to the struct type, the data on the right is related to the input argument of the funcion
    ptr->link = NULL;

    ptr->link = *head;//I need dereference because the input argument is a double pointer
    *head = ptr;
    return;
    //remember that this head is a LOCAL head, not the head of the main
}//per chiamare questa funzione devo passare add_atbeg2(&head , data) da main (cioè l'address del puntatore (puntatore di puntatore))
