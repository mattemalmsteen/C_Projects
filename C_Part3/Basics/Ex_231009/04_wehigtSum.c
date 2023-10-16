/*
Create a function with the following prototype: 
float weighted_sum(float values[], float weights[], int n_values) 
which returns the weighted sum of values by weights
Example: 
if we take an array of values such as [1, 3, -1]
and take [0.5, 0, 1]
the function must calculate 0.5 * 1 + 0 * 3 + 1 * -1
Note: pno need for main function!
*/
#include <stdio.h>

float weighted_sum(float values[], float weights[], int n_values){
    float sum = 0;
    for (int i = 0; i < n_values; i++){
        sum = sum + (values[i] * weights[i]);
    }
    return sum;
}

int main(){
    float values[3] = {1, 3, -1};
    float weights[3] = {0.5, 0, 1};
    int size = sizeof(values) / sizeof(values[0]);

    printf("%g", weighted_sum(values, weights, size));
}
