#include <stdio.h>

void transpMatr(int row, int col, int matrix[row][col], int transpose[col][row]);

int main (){

    int r, c;
    
    printf("Please enter the number of rows for the matrix: ");
    scanf("%i", &r);

    printf("Please enter the number of columns for the matrix: ");
    scanf("%i", &c);

    int m[r][c];
    int t[c][r];

    transpMatr(r, c, m, t);

    return 0;
}



void transpMatr(int row, int col, int matrix[row][col], int transpose[col][row]){
    printf("Original matrix: ");
    for (int i = 0; i < row; i++) {
        printf("\n");
        for (int j = 0; j < col; j++) {
            matrix[i] [j] = i+j;
            printf("%d ", matrix[i][j]);
        }
    }
    for (int i = 0; i < row; i ++){
        for (int j = 0; j < col; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nTransposed matrix: ");
    for (int j = 0; j < col; j ++){
        printf("\n");
        for (int i = 0; i < row; i++){
            printf("%i ",transpose[j][i]);
        }
    }
}