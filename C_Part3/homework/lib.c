#include "header.h"
#include <stdlib.h>
#include <stdio.h>

void add_node_at_end_of_list(node *sll, node *new){
    if (sll == NULL){
        sll = new;
        return;
    }
    node *iterator;
    iterator = sll->next;
    if (iterator == NULL){
        sll->next = new;
        return;
    }else{
        while (iterator != NULL){
            iterator = iterator->next;
    }
    sll->next = new;
    return;
    }
}