/*
Code a range function that creates an array and fills it with inters. 
The integer array must contain all integers between min_value (included) and max_value (excluded). 
The function must have the following prototype: 
int* range(int min_value, int max_value) 
Example: range(3, 7) returns the array [3, 4, 5, 6]
Note: No need for a main function! 
*/
#include <stdio.h>
#include <stdlib.h>

int* range(int min_value, int max_value){
    int size = max_value - min_value;
    int *array = malloc(sizeof(int) * size);
    array[0] = min_value;
    for (int j =1; j < size; j++){
            array[j] = min_value + j;
    }
    return array;
}

int main(){
    int min = 3;
    int max = 7;
    range(min, max);
}

