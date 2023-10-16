/*code the function Node* minimum(Node* head) which return the minimum value of a linked list*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int x;
    struct Node *next;
} Node;

Node *minNode(Node *head){
    if (head == NULL){
        printf("Empty list");
        return NULL;
    }
    Node *min = (Node *)malloc(sizeof(Node));
    Node *iterator = head;
    min = head;
    while (iterator != NULL){
            if (iterator->x < min->x){
                min = iterator;
            }
            iterator = iterator->next;
    }
    return min;
}

int main(){
    Node *n1 = (Node *)malloc(sizeof(Node));
    Node *n2 = (Node *)malloc(sizeof(Node));
    Node *n3 = (Node *)malloc(sizeof(Node));

    n1->x = 1;
    n2->x = 11;
    n3->x = 3;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    Node *min = minNode(n1);
    printf("The min value is %d", min->x);
}