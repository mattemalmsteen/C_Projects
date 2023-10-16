/* Declare a function named replaceWithAbsolute that takes an integer pointer as a parameter and modifies the value of the integer pointed to by converting it to its absolute value.

 In the main function, declare an integer variable, initialize it with a value, and then call the replaceWithAbsolute function to replace its value with the absolute value. 

Finally, print the original and updated values of the variable to verify the result.*/

#include <stdio.h>

void absolute(int *n);

int main(){

    int x = -11;

    printf("Before: %i\n", x);

    absolute(&x);

    printf("After: %i", x);

    return 0;
}

void absolute(int *n){
    if (*n < 0){
        *n *= -1;
        return;
    }
}