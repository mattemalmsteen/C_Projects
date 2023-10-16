/*
Code the function create_float_array which creates an array of floats. The function must have the following prototype: 
float* create_float_array(int n_values, float initial_value) 
The array must be filled with the value initial_value.
Example:  create_float_array(3, 1.1) will create an array with 3 values all worth 1.1 
Note: no main function needed!
*/
#include <stdio.h>
#include <stdlib.h>

float* create_float_array(int n_values, float initial_value){
    float *array = (float *)malloc(sizeof(float) * n_values);
    for (int i = 0; i < n_values; i++)
    {
        array[i] = initial_value;
    }
    return array;
}

int main(){
    int n = 3;
    int init = 11;

    create_float_array(n, init);
}
