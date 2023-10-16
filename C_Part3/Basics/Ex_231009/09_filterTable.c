/*Create a function with the following prototype: 
int* array_filter(int *values, int n_values,     int (*callbackfunc)(int v)  ) 
That returns an array that will contain only the values of values for which the function passed by the function pointer will return 1. 
You sized of the returned array can be of the size of the original one
You don't need to code the main, just the function. */
#include<stdio.h>
#include <stdlib.h>

int *callbackfunc(int v){
    if (v<10)
        return 1;
}
/*
int* array_filter(int *values, int n_values, int (*callbackfunc)(int v)){
    int *filter = (int*)malloc(sizeof(int) * n_values);
    int newSize = 0;
    for (int i = 0; i < n_values; i++){
        for (int j = 0; j < n_values; j++){
            if ((callbackfunc(j))==1){
                filter[i] = values[j];
                newSize++;
            }
        }
    }
    int *final = (int*)realloc(filter, newSize);
    for (int i = 0; i < newSize;i++){
        printf("%i", final[i]);}
    return final;
}*/

int* array_filter(int *values, int n_values, int (*callbackfunc)(int v)) {
    // Allocate memory for the filtered array
    int *filtered_array = (int*)malloc(n_values * sizeof(int));
    if (filtered_array == NULL) {
        // Memory allocation failed
        return NULL;
    }

    // Index for the filtered array
    int index = 0;

    // Iterate through the original array
    for (int i = 0; i < n_values; ++i) {
        // Check if the callback function returns 1 for the current value
        if (callbackfunc(values[i]) == 1) {
            // Add the value to the filtered array
            filtered_array[index++] = values[i];
        }
    }

    // Resize the filtered array to the actual number of filtered values
    filtered_array = (int*)realloc(filtered_array, index * sizeof(int));

    return filtered_array;
}

int main(){
    int values[] = {1, 2, 3, 11, 12};
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        int v = callbackfunc(values[i]);
        array_filter(values, size, v);
    }

}