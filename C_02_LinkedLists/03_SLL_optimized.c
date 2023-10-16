/*
This is the optimization of the sll creation in n.2
Instead of using 3 pointers it will use only one.
*/
#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *link;
};


int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL; 

    struct node *current = (struct node *)malloc(sizeof(struct node)); //this is the declaration of current. It is also initialized with malloc (which returns a pointer to current that is the address of the reserved memory block).
    current->data = 98;
    current->link = NULL;

    head->link = current; //for this line is fundamental to be in this position, otherwise I will lost the link between head and second node
    //with this line i assign the value of the current pointer to the head pointer. This pointer contains then the address of the memory block created by malloc in the previous current declaration

    //now i can assign to the pointer of current another address of a new block of memory for the 3rd node
    current = (struct node *)malloc(sizeof(struct node)); //in sostanza in questo caso cambio il contenuto del puntatore current, che punterà al nuovo blocco di memoria allocato con malloc
    current->data = 3;
    current->link = NULL;

    head->link->link = current;//in this way I use only one pointer (current) instead of two

    return 0;
}