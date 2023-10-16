/*

Create an integer array with a fixed size (e.g., 5 elements). Fill the array with values. 

Write a C program that uses pointers to display the elements of the array in reverse order without modifying the original array. 
*/

#include <stdio.h>

void reverseArray (int *array, int dimension);

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);
}


void reverseArray (int *array, int dimension){
    int lastInd = dimension - 1;
    for (int i = lastInd; i >= 0; i--){
        printf("%i ", *(array + i));
    }
    return;
}


