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

    int size, num, dPos, nPos;
    int pos1 = 1;
    int pos2 = 3;

    printf("Eneter the dimension of the array (min 4): ");
    scanf(" %i", &size);
    int *sizePtr;
    sizePtr = &size;
    size = *sizePtr;
    int *array = createArray(size);
    printf("The array is:\n");
    displayArray(array, size);

    int choice;
    printf("\nEnter your choice to test function:");
    printf("\n1.Largest element.\n2.Reverse array.\n3.Sum.\n4.Swap pos 2 and 4.\n5.Remove duplicates.\n6.Sort ascending.\n7.insert at the begining.\n");
    printf("8.Insert at the end.\n9.Insert at given position.\n10.Delete at begining.\n11.Delete at the end.\n12.Delete at given position.\n");
    scanf(" %i", &choice);
    switch (choice){
        case 1:
            largestEl(array, size);
            
        case 2:
            reverse(array, size);
            printf("The reverse array is: \n");
            
        case 3:
            printf("\nThe sum is: \n");
            sum(array, size);
            
        case 4:
            swap(array, pos1, pos2);
            printf("\nPos %d and %d swapped:\n", pos1+1, pos2+1);
            
        case 5:
            removeDuplicate(array, sizePtr);
            printf("\nThe array whitout duplicates is:");
            
        case 6:
            sortAscending(array,size);
            printf("\nSorted array:\n");
            
        case 7:
            printf("\nEneter the number to add at the beginning of the array: ");
            scanf(" %i", &num);     
            insBeg(array, sizePtr, num);
            
        case 8:
            printf("\nEneter the number to add at the end of the array: ");
            scanf(" %i", &num);
            insEnd(array, sizePtr, num);
            
        case 9:
            printf("\nEneter the index position where to add an element: ");
            scanf(" %i", &nPos);
            printf("\nEneter the number to add to the array: ");
            scanf(" %i", &num);
            insPos(array, sizePtr, num, nPos);
            
        case 11:
            printf("\nDeleted element at the end: \n");
            delEnd(array, sizePtr);
            
        case 10:
            printf("\nDeleted element at the begining: \n");
            delBeg(array, sizePtr);
            
        case 12:
            printf("\nEneter the index position where to remove an element: ");
            scanf(" %i", &dPos);
            printf("\nDeleted element at define position: \n");
            delPos(array, sizePtr, dPos);
            
        default:
            printf("Invalid input");
        }
        printf("\nOutput array: ");
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
                
            }
        }
    }
    if (pos != 0){
        for (int i = pos; i < *sizePtr - 1; i++){
            arr[i] = arr[i + 1];
        }
        *sizePtr -= 1;
        int *newArr = (int*)realloc(arr,*sizePtr * sizeof(int));
        if (newArr == NULL) {
            printf("Memory allocation failed.\n");
            return; 
        }
        removeDuplicate(newArr, sizePtr);
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