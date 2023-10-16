#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *creatingFirstNode(int data);
struct node *addEnd(struct node *tail, int data);
struct node *createCSLL(struct node *tail);
int countNodes(struct node *tail);
void displayList(struct node *tail);

int main(){
    struct node *tail;
    tail = createCSLL(tail);
    displayList(tail);
}

struct node *creatingFirstNode(int data){ //it is equivalent to add a node to an empty list
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    return temp;
}

struct node *addEnd(struct node *tail, int data){
    struct node *newP = malloc(sizeof(struct node));
    newP-> data = data;
    newP->next = NULL;

    newP->next = tail->next;
    tail->next = newP;
    tail = newP;

    return tail;
}

struct node *createCSLL(struct node *tail){
    int num, data;
    printf("How many nodes to put in the list? ");
    scanf(" %i", &num);

    printf("\nEnter the data for the node 0: ");// Need to create the first node before to attach the other
    scanf(" %d", &data);
    tail = creatingFirstNode(data);

    for (int i = 1; i < num; i++){
        printf("\nEnter the data for the node %d: ",i);
        scanf(" %d", &data);
        tail = addEnd(tail, data);
    }
    return tail;
}

int countNodes(struct node *tail){

}


void displayList(struct node *tail){
    struct node *ptr = tail->next;
    printf("\n");
    do{
        printf(" %d", ptr->data);
        ptr = ptr->next;
    } while (ptr != tail->next);
}
