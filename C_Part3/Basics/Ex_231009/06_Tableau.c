/*Create an is_in_array function that checks for the presence of a given value in a float array. 
It returns 1 if the value is there and -1 otherwise. The function must have the following prototype:
int is_in_array(float* values, int n_values, float needle ) 
Example : is_in_array used on array [1, 1.1, -2] and with needle = -2, must return 1
Note: No main function needed!*/
#include<stdio.h>

int is_in_array(float* values, int n_values, float needle ){
    for (int i = 0; i < n_values; i++){
        if (values[i]==needle){
            return 1;
            break;
        }
    }return -1;
}

int main(){
    float arr [3] = {1, 1.1, -2};
    int size = 3;
    float need = -2;

    printf("%d", is_in_array(arr, size, need));
}