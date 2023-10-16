#include <stdio.h>

int main (){
    int arr [] = {3, 4, 5, 9};
    int pos = 0;

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < size; i++){
        if (arr[i] > arr[pos]){
            pos = i;
        }else{
            printf("Array not sorted");
        }
    }
    if (pos == size-1){
        printf("It is a sorted array.");
    }
}