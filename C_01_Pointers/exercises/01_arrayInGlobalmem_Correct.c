#include <stdio.h>
#include<stdlib.h>

int array[] = {7, 36, 12, 7, 4, 88, 5, 5, 11, 2, 9};
int size = sizeof(array) / sizeof(array[0]);


void displayArray();
void largestEl();
void reverse();
void sum();
void swap(int pos1, int pos2);
void removeDuplicate();
void sortAscending();

int main(){

    largestEl();
    reverse();

    printf("\nReverse array is:\n");
    displayArray();
   
    printf("\nThe sum of the elemts in the array is:\n");
    sum();

    int pos1 = 5;
    int pos2 = 3;
    swap(pos1, pos2);
    printf("\nPos %d and %d swapped:\n", pos1+1, pos2+1);
    displayArray();
    removeDuplicate();
    printf("\nArray whitout duplicates:\n");
    displayArray();
    sortAscending();
    printf("\nThe sorted array is;\n");
    displayArray();

    return 0;
}

void displayArray(){
    for (int i = 0; i < size; i++){
        printf("%i ", *(array + i));
    }
    return;
}

void largestEl(){
    int pos = 0;
    for (int i = 1; i < size; i++){
        if (array[i] > array[pos]){
            pos = i;
        }
    }
    printf("The largest elemnt is: %d\n", array[pos]);
}

void reverse(){
    int *start = array;
    int *end = array + size - 1;

    while(start<end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }   
}

void sum(){
    int s = 0;
    for (int i = 0; i < size; i++){
        s = s + *(array + i);
    }
    printf("%d", s);
}

void swap(int pos1, int pos2){
    int temp;
    temp = array[pos1];
    array[pos1]= array[pos2];
    array[pos2] = temp;
    return;
}

void removeDuplicate(){
    int pos = 0;
    for (int j = 0; j < size; j++ ){
        for (int i = j+1; i < size; i++){
            if (array[j] == array[i]){
                pos = i;
                break;
            }
        }
    }
    if (pos != 0){
        for (int i = 0; i < pos; i++){
            array[i] = array[i];
        }
        for (int i = pos; i < size -1; i++){
            array[i] = array[i + 1];
        }
        int* newSize;
        newSize = &size;
        *newSize = size - 1;
        removeDuplicate();
    }
}

void sortAscending(){
    for (int k = 0; k < size; k++){
        for (int j = 0; j < size-1; j++){
            for (int i = j+1; i < size; i++)
            {
                if (array[j] > array[i])
                {
                    swap(j, i);
                    break;
                }
            }        
        }
    }   
}