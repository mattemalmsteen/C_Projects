#include <stdio.h>

int main(){
    int tab1 [] = { 1, 2, 6, 7, 9};
    int size1 = sizeof(tab1) / sizeof(tab1[0]);
    int tab2 [] = { 3, 2, 8};
    int size2 = sizeof(tab2) / sizeof(tab2[0]);
    int size3 = size1 + size2;          // the size of the third array is the sum of the previous arrays' sizes
    int tab3 [size3];

    for (int i = 0; i < size1; i ++){    // copy the 1st array in the 3rd
        tab3[i] = tab1 [i];
    }

    for (int i = 0; i < size2; i ++){    // copy the 2nd array in the 3rd
        tab3[i+size1] = tab2 [i];
    }

    printf("The 1st array was:\n");
    for (int i = 0; i < size1; i++){
        printf("%i ", tab1[i]);
    }

    printf("\nThe 2nd array was:\n");
    for (int i = 0; i < size2; i++){
        printf("%i ", tab2[i]);
    }

    printf("\nThe concatenation is:\n");
        for (int i = 0; i <size3; i++){
        printf("%i ", tab3[i]);
    }
}