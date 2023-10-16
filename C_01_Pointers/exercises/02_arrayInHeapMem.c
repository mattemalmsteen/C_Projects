#include <stdio.h>
#include<stdlib.h>

int *createArray(int size);
void displayArray(int *arr, int size);
void largestEl(int *arr, int size);
void reverse(int *arr, int size);
void sum(int *arr, int size);
void swap(int *arr, int pos1, int pos2);
void removeDuplicate(int *arr, int size);
void sortAscending(int *arr, int size);
void insEnd(int *arr, int size, int n);

int main(){
    
    int size, num;
    printf("Eneter the dimension of the array: ");
    scanf(" %i", &size);

    /*int *array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }   
    for (int i = 0; i < size; i++){
        array[i] = i*2;
    }*/

    int *array = createArray(size);
    printf("The array is:\n");
    displayArray(array, size);
    /*largestEl(array, size);
    reverse(array, size);
    printf("The reverse array is: \n");
    displayArray(array, size);
    printf("\nThe sum is: \n");
    sum(array, size);
    int pos1 = 1;
    int pos2 = 3;
    swap(array, pos1, pos2);
    printf("\nPos %d and %d swapped:\n", pos1+1, pos2+1);
    displayArray(array, size);*/
    removeDuplicate(array,size);
    printf("\nArray whitout duplicates:\n");
    displayArray(array,size);

}


int *createArray (int size){
    
    int *arr = (int*)malloc(size * sizeof(int));

    if (arr == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed.\n");
        return NULL; // Exit with an error code
    }   

    for (int i = 0; i < size; i++){
        printf("Please enter the %i element of the array: ", i + 1);
        scanf("%i", &(arr[i]));

    }
    return arr;
}

void displayArray(int *arr, int size){
    for (int i = 0; i < size; i++){
        printf("%i ", *(arr + i));
    }
    return;
}

void largestEl(int *arr, int size){
    int pos = 0;
    for (int i = 1; i < size; i++){
        if (arr[i] > arr[pos]){
            pos = i;
        }
    }
    printf("\nThe largest element is: %d\n", arr[pos]);
}

void reverse(int *arr, int size){
    int *start = arr;
    int *end = arr + size - 1;

    while(start<end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }   
}

void sum(int *arr, int size){
    int s = 0;
    for (int i = 0; i < size; i++){
        s = s + *(arr + i);
    }
    printf("%d", s);
}

void swap(int *arr, int pos1, int pos2){
    int temp;
    temp = arr[pos1];
    arr[pos1]= arr[pos2];
    arr[pos2] = temp;
    return;
}

void removeDuplicate(int *arr, int size){
    int pos = 0;
    for (int j = 0; j < size; j++ ){
        for (int i = j+1; i < size; i++){
            if (arr[j] == arr[i]){
                pos = i;
                break;
            }
        }
    }
    if (pos != 0){
        int *newArr = (int *)malloc((size - 1) * sizeof(int));
        for (int i = 0; i < pos; i++){
            newArr[i] = arr[i];
        }
        for (int i = pos; i < size -1; i++){
            newArr[i] = arr[i + 1];
        }
        int *arr = (int *)realloc(newArr, (size-1) * sizeof(int));
        free(newArr);
        int*nSize;
        nSize=&size;
        *nSize = size - 1;
        return;
    }
}

