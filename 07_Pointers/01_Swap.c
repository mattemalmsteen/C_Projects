/*
Write a C program that swaps the values of two integer variables using a function.

Declare a function named swap that takes two integer pointers as parameters and swaps the values of the integers pointed to by those pointers. 

In the main function, declare two integer variables, initialize them with values, and then call the swap function to swap their values. 

Finally, print the values of the variables before and after the swap to verify the result.
*/

#include <stdio.h>

void swap(int *a, int *b);

int main(){
    int x = 4;
    int y = 3;

    printf("Before swap: x is %i and y is %i\n", x, y);

    swap(&x, &y);

    printf("After swap: x is %i and y is %i", x, y);

    return 0;
}


void swap(int *a, int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    return;
}