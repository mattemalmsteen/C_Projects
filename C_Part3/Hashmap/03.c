/*
We want to store a collection of data using key / value. To start we will do a naive approch using Linked lists. 
In order to do that we will use a struct named Entry with three members : 

    char* key
    float value
    Entry* next

1. Create the struct Entry
2. In the test_main function, create a Linked List with two node. Specify the values  and the key of both nodes and connect 
node 1 to node 2. 
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Entry{
    char *key;
    float value;
    struct Entry *next;
} Entry;

int main(){
    Entry e1;
    e1.key = "name";
    e1.value = 3.5;
    e1.next = NULL;

    Entry e2;
    e2.key = "age";
    e2.value = 25;
    e2.next = NULL;

    e1.next = &e2;
}