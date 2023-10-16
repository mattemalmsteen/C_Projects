#include <stdio.h>
#include <stdlib.h>

//define a node:
struct node {
    int data;
    struct node *link;
};  //!!!! semicolon!

int main(){
    struct node *head = NULL; //pointer which points to the node. This is declared on the stack memory.
    head = (struct node *)malloc(sizeof(struct node)); // reserve memory block (in heap) of size of node. head will point to this chunck of memory.
    head->data = 45; //access the data field of the node and assing a value
    head->link = NULL; //only one node, so assign null

    printf("%d", head->data);

    free(head); //because we have only one node
    head = NULL;

    return 0;
}