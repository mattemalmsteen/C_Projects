#include <stdio.h>

int main(){
    int tab [] = { 1, 2, 6, 7, 9};
    int n;
    int size = sizeof(tab) / sizeof(tab[0]);
    int sizeB = size + 1;
    int newTab [sizeB];

    printf("Please enter the number to add to the array: ");
    scanf("%i", &n);
    
    for (int i = 0; i < size; i ++){    // copy the values from the array tab to newTab
        newTab[i] = tab [i];
    }
    newTab[sizeB-1] = n;    //add the user's value at the end of newTab

    printf("The old array was:\n");
    for (int i = 0; i < size; i++){
        printf("%i ", tab[i]);
    }

    printf("\nThe new array is:\n");
        for (int i = 0; i <= size; i++){
        printf("%i ", newTab[i]);
    }
}