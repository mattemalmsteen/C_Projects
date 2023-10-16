#include <stdio.h>

void main(){
    int x = 5;
    int *p;
    p = &x;
    
    //se voglio modificare il valore di x con il puntatore:
    *p = 6;

    int **q; //si tratta di un double pointer, al quale posso assegnare l'address di un altro pointer
    q = &p;
    
    // posso anche avere un triplo puntatore, che punterà ad un doppio puntatore

    int ***r;
    r = &q;
    printf("&x = %d\n", &x);
    printf("*p = %d\n", *p);//dereferencing: ottengo il valore di x
    printf("&p = %d\n", &p);
    printf("*q = %d\n", *q);//il valore di q è l'address di x
    printf("&q = %d\n", &q);
    printf("*r = %d\n", *r);//il valore di r è l'address di p
    printf("&r = %d\n", &r);
    printf("*(*r) %d\n", *(*r));// dereferencing di dereference di r --> p --> indirizzo di x
    printf("*(*(*r)) %d\n", *(*(*r)));// triplo dereferencing --> valore di x

    /**/
}