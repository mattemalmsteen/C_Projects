#include <stdio.h>
#include<stdlib.h>

int array[] = {20, 36, 2, 5, 4, 7, 5, 11, 2};

void displayArray(int *arr, int size);
void largestEl(int *arr, int size);
void reverse(int *arr, int size);
void sum(int *arr, int size);
void swap(int *arr, int pos1, int pos2);

int main(){
    int size = sizeof(array) / sizeof(array[0]);

    largestEl(array, size);
    reverse(array, size);

    printf("\nReverse array is:\n");
    displayArray(array, size);
   
    printf("\nThe sum of the elemts in the array is:\n");
    sum(array, size);

    int pos1 = 5;
    int pos2 = 3;
    swap(array, pos1, pos2);
    printf("\nPos %d and %d swapped:\n", pos1+1, pos2+1);
    displayArray(array, size);

    return 0;
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
    printf("The largest elemnt is: %d\n", arr[pos]);
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

