/*Reusing the Struct of the previous exercise
Create a function Entry* get_value_by_key(Entry* head, char* key_to_search) 
which returns the node matching key_to_search if it has been found and null otherwise. */

#include <stdio.h>
#include <stdlib.h>

typedef struct Entry{
    char *key;
    float value;
    struct Entry *next;
} Entry;

Entry* get_value_by_key(Entry* head, char* key_to_search){
    Entry *find = (Entry *)malloc(sizeof(Entry));
    Entry *iterator = head->next;
    find = head;
    if (find->key == key_to_search){
        return find;
    }
    while(iterator != NULL){
        if (key_to_search == iterator->key){
            find = find->next;
            return find;
        }else{
            iterator = iterator->next;
            find = find->next;
        }
    }
    return NULL;
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

    Entry *e3 = malloc(sizeof(Entry));
    e3 = get_value_by_key(e1, "name");
    printf("%s\n", e3->key);
    printf("%f\n", e3->value);
    printf("%p %p\n", e3->next, e2);

}