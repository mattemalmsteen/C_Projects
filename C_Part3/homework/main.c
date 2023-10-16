#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void test_add_node(){
    node *sll = (node*)malloc(sizeof(node));
    sll->value = 5;
    sll->next = NULL;

    node *new = (node*)malloc(sizeof(node));
    new->value = 66;
    new->next = NULL;

    add_node_at_end_of_list( sll, new);


    if (sll->next != new){
        printf("BUG!");
    }else{
        printf("node 1 next: %p\n", sll->next);
        printf("node 2 adress: %p\n", new);
    }
}

int main(){
    test_add_node();
}