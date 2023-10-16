/*
https://www.w3resource.com/c-programming-exercises/linked_list/index.php
Write a program in C to create and display a Singly Linked List.
Test Data :
Input the number of nodes : 3
Input data for node 1 : 5
Input data for node 2 : 6
Input data for node 3 : 7

Expected Output :
 Data entered in the list :                                                                                   
 Data = 5                                                                                                     
 Data = 6                                                                                                     
 Data = 7 

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
} node;

void 

int main(){

    node one, two, three;

    one.data = 5;
    two.data = 6;
    three.data = 7;

    one.link = &two;
    two.link = &three;
    three.link = NULL;

    printf("Data entered in the list:\n");
    printf("Data = %d\n", one.data);
    printf("Data = %d\n", two.data);
    printf("Data = %d\n", three.data);

}
