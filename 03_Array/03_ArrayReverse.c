#include <stdio.h>

int main (){
    int nums [] = {1, 2, 3, 4, 5};
    int dimension = sizeof(nums)/sizeof(nums[0]);
    for (int i = dimension-1; i >=0 ; i--){
        printf ("%i ", nums[i]);
    }
}