/*Reusing the Struct of the previous exercise
Create a function Entry* add_entry_to_the_end(Entry* head, char* key, float value)
 which add a new entry at the end of the linked list*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Entry{
    char *key;
    float value;
    struct Entry *next;
} Entry;

Entry* add_entry_to_the_end(Entry* head, char* key, float value){
    Entry *newE = (Entry *)malloc(sizeof(Entry));
    if (newE == NULL){
        printf("Memory didn't allocated");
        return NULL;
    }
    newE->key = key;
    newE->value = value;
    newE->next = NULL;
    if (head->next == NULL){
        head->next = newE;
    }else{
        Entry *iterator = head->next;
        while (iterator->next != NULL){
            iterator = iterator->next;
        }
        iterator->next = newE;
    }
    return head;
}

int main(){
    Entry *e1 = malloc(sizeof(Entry));
    e1->key = "name";
    e1->value = 3.5;
    e1->next = NULL;

    Entry *e2 = malloc(sizeof(Entry));
    e2->key = "age";
    e2->value = 25;
    e2->next = NULL;

    e1->next = e2;

    char *e3char = "address";
    float e3val = 55.2;
    
    e1 = add_entry_to_the_end(e1, e3char, e3val);
    
}