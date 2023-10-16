#include <stdio.h>


int main(){
    int min = 0;
    int nums [] = {5, 3, 2, 4, 8, 1};

    int dimension = sizeof(nums) / sizeof(nums[0]);

    for (int i = 1; i < dimension; i++){
        if (nums[i] < nums[min]){
            min = i;
        }
    }
    printf("The minimum is %i ", nums[min]);
}