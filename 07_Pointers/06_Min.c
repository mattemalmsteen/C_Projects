/*
Write a C program that finds and displays the minimum element in an integer array using pointers. The program should do the following:

    Define an integer array with a fixed size (e.g., 6 elements) and fill it with values.
    Use a pointer to iterate through the array and find the minimum element.
    Display the minimum element from the array.
*/

#include <stdio.h>

int minElement(int *array, int dimension);

int main(){
    int arr[] = {2, 3, 6, 7, 4, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min;

    min = minElement(arr, size);
    printf("The minimum is: %i", arr[min]);
}

int minElement(int *array, int dimension){
    int pos = 0;
    for (int i = 0; i < dimension; i++){
        if(array[i] < array[pos]){
            pos = i;
        }
    }
    return pos;
}