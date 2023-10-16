
#include <stdio.h>

void reverseTab(int tab[], int size);

int main(){
    int t[] = {1, 2, 3, 4, 6, 9};
    int len = sizeof(t)/sizeof(t[0]);
    reverseTab(t, len);
}

void reverseTab(int tab[], int size){
    for (int i = size -1; i >= 0; i--){
        printf("%i ", tab[i]);
    }
    return;
}

    /*int nums [] = {1, 2, 3, 4, 5};
    int dimension = sizeof(nums)/sizeof(nums[0]);
    for (int i = dimension-1; i >=0 ; i--){
        printf ("%i ", nums[i]);*/