#include <stdio.h>

int main (){
    int matrix [2][3] = {{1, 2, 3}, {4, 5, 6}};
    int arrFlat[6];


    for (int j = 0; j < 3; j++){
        arrFlat [j] = matrix [0][j];
    }

    for (int j = 0; j < 3; j++){
        arrFlat [j+3] = matrix [1][j];
    }
    
    for (int j = 0; j < 6; j++){
        printf("%i ", arrFlat[j]);
    }
}