/*Write a C function that inserts a new integer value at the end of an integer array using pointers.*/

#include <stdio.h>
#include <stdlib.h>

int *createArray (int dimension);
int *newArray (int *arr, int dimension, int x);

int main(){
    int arrSize;
    printf("Eneter the dimension of the array: ");
    scanf(" %i", &arrSize);

    int *tab = createArray(arrSize);

    int newValue;
    printf("\nEneter a value to insert at the end of the array: ");
    scanf(" %i", &newValue);

    tab = newArray(tab, arrSize, newValue);

    printf("The new array is:\n");

    for (int i = 0; i < arrSize+1; i++)
    {
        printf("%i ", tab[i]);
    }
    free(tab); // Free the dynamically allocated memory when done
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
    int *NewArr = (int*)realloc(arr, dimension + 1 * sizeof(int));

    if (NewArr == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed.\n");
        return NULL; // Exit with an error code
    }

    NewArr[dimension] = x;

    return NewArr;
}