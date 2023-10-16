#include <stdio.h>

void matrixFunc (int row, int col, int matrix[row][col]);

int main (){
    int r, c;
    
    printf("Please enter the number of rows for the matrix: ");
    scanf("%i", &r);

    printf("Please enter the number of columns for the matrix: ");
    scanf("%i", &c);

    int m[r][c];


    matrixFunc(r, c, m);

    return 0;
}


void matrixFunc (int row, int col, int matrix[row][col]){
    for (int i = 0; i < row; i++) {
        printf("\n");
        for (int j = 0; j < col; j++) {
            matrix[i] [j] = i+j;
            printf("%d ", matrix[i][j]);
        }
    }
}
