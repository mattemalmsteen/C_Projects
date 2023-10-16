/*
Write a C program that takes an array of integers and uses pointers to display the elements of the array. 

The program should do the following:

    Define an integer array with a fixed size (e.g., 5 elements) and fill it with values.
    Use a pointer to iterate through the array and print each element.
    Display the elements of the array in their original order.
*/

#include <stdio.h>

void displayArray(int *array, int dimension);

int main(){

    int arr [] = {2, 6, 7, 5, 4};
    //int *ptr = arr;   //not needed if using the function, because the array is already a pointer, I can pass it directly as arg of the func.
    int size = sizeof(arr) / sizeof(arr[0]);

    displayArray(arr, size);

    /*for (int i = 0; i < size; i++){       //do it directly in main
        printf("%i ", *ptr);
        ptr++;
    }*/
}

void displayArray(int *array, int dimension){   //do it by function
    for (int i = 0; i < dimension; i++){
        printf("%i ", *(array + i));
    }
    return;
}