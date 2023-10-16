#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};


int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node)); //directly initialize the pointer and allocation memory
    head->data = 45;
    head->link = NULL; 
    //we will need to keep head to points the 1st element of the list

    struct node *current = (struct node *)malloc(sizeof(struct node)); //second node of the list
    current->data = 98;
    current->link = NULL;

    head->link = current; //assing the address of current to the pointer of head

    struct node *current2 = (struct node *)malloc(sizeof(struct node)); //second node of the list
    current2->data = 3;
    current2->link = NULL;

    current->link = current;//assing the address of current2 to the pointer of current

    return 0;
}