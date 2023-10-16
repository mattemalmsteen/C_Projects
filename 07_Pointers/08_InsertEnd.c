/*Write a C function that inserts a new integer value at the end of an integer array using pointers.*/

#include <stdio.h>
#include <stdlib.h>

int *createArray (int dimension);
int *newArray (int *arr, int dimension, int x);

int main(){
    int arrSize;
    printf("Eneter the dimension of the array: ");
    scanf(" %i", &arrSize);

    int *inputArray = createArray(arrSize);

    int outArraySize = arrSize + 1;
    int newValue;
    printf("\nEneter a value to insert at the end of the array: ");
    scanf(" %i", &newValue);

    int *outArray = newArray(inputArray, outArraySize, newValue);

    printf("The new array is:\n");

    for (int i = 0; i < outArraySize; i++)
    {
        printf("%i ", outArray[i]);
    }
    free(outArray); // Free the dynamically allocated memory when done
}



int *createArray (int dimension){
    
    int *arr = (int*)malloc(dimension * sizeof(int));

    if (arr == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed.\n");
        return NULL; // Exit with an error code
    }   

    for (int i = 0; i < dimension; i++){
        printf("Please enter the %i element of the array: ", i + 1);
        scanf("%i", &(arr[i]));

    }
    printf("The input array is:\n");
    for (int i = 0; i < dimension; i++){
        printf("%i ", arr[i]);
    }
    return arr;
}


int *newArray (int *arr, int dimension, int x){
    int *NewArr = (int*)realloc(arr, dimension * sizeof(int));

    if (NewArr == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed.\n");
        return NULL; // Exit with an error code
    }

    NewArr[dimension-1] = x;

    return NewArr;
}