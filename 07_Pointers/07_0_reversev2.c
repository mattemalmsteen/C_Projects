/*
Write a C program that reverses the elements of an integer array. The program should do the following:

    Define an integer array with a fixed size (e.g., 6 elements) and fill it with initial values.
    Use pointers to reverse the order of the elements in the array.
    Display the reversed array.
*/

#include <stdio.h>

int main(){

    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;
    int reverse[size];

    for (int i = size-1; i >=0 ; i--){
        reverse[i] = *(ptr +i);
        printf("%i ", reverse[i]);
    }

    /* Alternative solution by Nada:

    int *start = arr;
    int *end = arr + size - 1;

    while(start<end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }*/
}