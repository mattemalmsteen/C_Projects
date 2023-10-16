/*Given an integer k, and 2 integers a and b, write a C program that displays all multiples of k within the range of a to b 
(a and b are included).
Note:  t is a multiple of k if t is divisible by k.
Example: if a=5 and b=20 and k=4,  we want to get all the multiples of 4 between 5 and 20.
The program should display 8,12,16,20*/

#include <stdio.h>

int main(){
    int k = 4;
    int a = 5;
    int b = 20;

    printf("The muliples of %i between %i and %i are: ", k, a, b);
    for (int i = a; i <= b; i++){
        if (i%k == 0)
            printf("%i ", i);
    }
}

