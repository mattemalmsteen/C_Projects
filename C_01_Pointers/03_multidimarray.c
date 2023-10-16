#include <stdio.h>
#include <stdlib.h>

int main(){

    int(*p)[3];
    int B[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    p = B;
    printf("B= %d\n", B); //address del primo array
    printf("*(B+1)= %d\n", *(B + 1));//address del secondo array
    printf("*(B+2)= %d\n", *(B + 2));//address del 3 array
    printf("B[2 , 1]= %d\n", B[2][1]);//valore dell'elemento linea 2(cioè la terza) colonna 1 (cioè la seconda)
    printf("*(*(B+2)+1)= %d\n", *(*(B+2) +1));//vcome sopra, ma usando la notazione dei puntatori invece che gli indici

    printf("%d\n", B[1][2]);//getting value
    printf("%d\n", *(*(p + 1)+2));//getting same value as above
    printf("%d\n", *((B+1)+2));//getting address
    printf("%d\n", *((p + 1)+2));//getting same address as above
}