/*
Create an integer array with a fixed size (e.g., 7 elements). Fill the array with values. 

Write a C program that calculates and displays the sum of all elements in the array using pointers. 
*/

#include <stdio.h>

int sumArrayElements(int *array, int dimension);

int main(){

    int arr[] = {2, 3, 6, 7, 4, 9, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum;

    sum = sumArrayElements(arr, size);

    printf("The sum of the elements is: %i\n", sum);

    // Without function, using pointers notation:

    int arr2[] = {2, 3, 6, 7, 4, 9, 6};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int sum2 = 0;
    int *ptr = arr2;
    for (int i = 0; i < size2; i++){
        sum2 = sum2 + *(ptr + i);
    }
    printf("The sum without using func is: %i", sum2);
}

int sumArrayElements(int *array, int dimension){
    int s = 0;
    for (int i = 0; i < dimension; i++){
        s = s + array[i];
    }
    return s;
}
