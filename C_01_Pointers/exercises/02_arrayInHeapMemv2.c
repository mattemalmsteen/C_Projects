#include <stdio.h>
#include<stdlib.h>

int *createArray(int size);
void displayArray(int *arr, int size);
void largestEl(int *arr, int size);
void reverse(int *arr, int size);
void sum(int *arr, int size);
void swap(int *arr, int pos1, int pos2);
void removeDuplicate(int *arr, int *sizePtr);
void sortAscending(int *arr, int size);
void insEnd(int *arr, int *sizePtr, int n);
void insBeg(int *arr, int *sizePtr, int n);
void insPos(int *arr, int *sizePtr, int n, int pos);
void delEnd(int *arr, int *sizePtr);
void delBeg(int *arr, int *sizePtr);
void delPos(int *arr, int *sizePtr, int pos);

int main(){

    int size, num;
    printf("Eneter the dimension of the array: ");
    scanf(" %i", &size);
    int *sizePtr;
    sizePtr = &size;
    size = *sizePtr;
    int *array = createArray(size);
    printf("The array is:\n");
    displayArray(array, size);
    largestEl(array, size);
    reverse(array, size);
    printf("The reverse array is: \n");
    displayArray(array, size);
    printf("\nThe sum is: \n");
    sum(array, size);
    int pos1 = 1;
    int pos2 = 3;
    swap(array, pos1, pos2);
    printf("\nPos %d and %d swapped:\n", pos1+1, pos2+1);
    displayArray(array, size);
    /*removeDuplicate(array, sizePtr);
    printf("\nArray whitout duplicates:\n");
    displayArray(array,size);*/
    sortAscending(array,size);
    printf("\nSorted array:\n");
    displayArray(array, size);
    printf("\nEneter the number to add at the beginning of the array: ");
    scanf(" %i", &num);     
    insBeg(array, sizePtr, num);
    displayArray(array, size);
    printf("\nEneter the number to add at the end of the array: ");
    scanf(" %i", &num);
    insEnd(array, sizePtr, num);
    displayArray(array, size);
    int nPos;
    printf("\nEneter the index position where to add an element: ");
    scanf(" %i", &nPos);
    printf("\nEneter the number to add to the array: ");
    scanf(" %i", &num);
    insPos(array, sizePtr, num, nPos);
    displayArray(array, size);
    printf("\nDeleted element at the end: \n");
    delEnd(array, sizePtr);
    displayArray(array, size);
    printf("\nDeleted element at the begining: \n");
    delBeg(array, sizePtr);
    displayArray(array, size);
    int dPos;
    printf("\nEneter the index position where to remove an element: ");
    scanf(" %i", &dPos);
    printf("\nDeleted element at define position: \n");
    delPos(array, sizePtr, dPos);
    displayArray(array, size);
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

void removeDuplicate(int *arr, int *sizePtr){
    int pos = 0;
    int size = *sizePtr;
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
        *sizePtr -= 1;
        free(newArr);
        return;
    }
}

void sortAscending(int *arr, int size){
    for (int k = 0; k < size; k++){
        for (int j = 0; j < size-1; j++){
            for (int i = j+1; i < size; i++)
            {
                if (arr[j] > arr[i])
                {
                    swap(arr, j, i);
                    break;
                }
            }        
        }
    }   
}

void insEnd(int *arr, int *sizePtr, int n){
    *sizePtr += 1;
    int *NewArr = (int*)realloc(arr,*sizePtr * sizeof(int));

    if (NewArr == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    NewArr[*sizePtr-1] = n;
    return;
}

void insBeg(int *arr, int *sizePtr, int n){
    *sizePtr += 1;
    int *newArr = (int*)realloc(arr,*sizePtr * sizeof(int));

    if (newArr == NULL) {
        printf("Memory allocation failed.\n");
        return; 
    }
    for (int i = *sizePtr-1; i > 0; i--){
        newArr[i] = newArr[i - 1];
    }
    newArr[0] = n;
    return;
}

void insPos(int *arr, int *sizePtr, int n, int pos){
    *sizePtr += 1;
    int *newArr = (int*)realloc(arr,*sizePtr * sizeof(int));

    if (newArr == NULL) {
        printf("Memory allocation failed.\n");
        return; 
    }
    for (int i = *sizePtr - 1; i > pos; i-- ){
        newArr[i] = newArr[i - 1];
    }
    newArr[pos] = n;
    return;
}

void delEnd(int *arr, int *sizePtr){
    *sizePtr -= 1;
    int *newArr = (int*)realloc(arr,*sizePtr * sizeof(int));

    if (newArr == NULL) {
        printf("Memory allocation failed.\n");
        return; 
    }
}

void delBeg(int *arr, int *sizePtr){
    for (int i = 0; i < *sizePtr; i++){
        arr[i] = arr[i+1];
    }
    *sizePtr -= 1;
    int *newArr = (int*)realloc(arr,*sizePtr * sizeof(int));

    if (newArr == NULL) {
        printf("Memory allocation failed.\n");
        return; 
    }
}

void delPos(int *arr, int *sizePtr, int pos){
    for (int i = pos; i < *sizePtr - 1; i++){
        arr[i] = arr[i + 1];
    }
    *sizePtr -= 1;
    int *newArr = (int*)realloc(arr,*sizePtr * sizeof(int));
    if (newArr == NULL) {
        printf("Memory allocation failed.\n");
        return; 
    }
    return;
}