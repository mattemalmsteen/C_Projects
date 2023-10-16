/*
Write a C program that dynamically allocates an array of integers using pointers. 

Prompt the user to enter the size of the array, allocate memory for it, and then ask the user to input values for each element. Finally, display the contents of the array. 

If you use knowledgeable, hardcode the values of size and array elements.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){

    int arrSize;
    printf("Eneter the dimension of the array: ");
    scanf(" %i", &arrSize);

    int *arr = (int*)malloc(arrSize * sizeof(int));

    if (arr == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }   

    for (int i = 0; i < arrSize; i++){
        int n;
        printf("Please enter the %i element of the array: ", i + 1);
        scanf("%i", &n);
        arr[i] = n;
    }
    printf("\n");
    for (int i = 0; i < arrSize; i++){
        printf("%i ", arr[i]);
    }
    free(arr); // Free the dynamically allocated memory when done
    return 0;
}