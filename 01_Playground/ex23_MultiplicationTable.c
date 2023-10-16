#include <stdio.h>

int main(){
    int num;

    printf("Please enter a number: ");
    scanf("%i", &num);

    printf("The table is: \n");

    for (int i = 0; i <= 10; i++){
        printf("%i x %i = %i\n", num, i, num*i);
    }
}