#include <stdio.h>

int main (){

    int matrix [3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int transpose [3][3];

    for (int i = 0; i < 3; i ++){
        for (int j = 0; j < 3; j++){
            transpose[j][i] = matrix[i][j];
        }
    }

    for (int j = 0; j < 3; j ++){
        printf("\n");
        for (int i = 0; i < 3; i++){
            printf("%i ",transpose[j][i]);
        }
    }
}