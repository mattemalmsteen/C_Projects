#include <stdio.h>

int main (){
    int num, pow, res;

    printf("Please enter a number to power: ");
    scanf("%i", &num);

    printf("Please enter the power: ");
    scanf("%i", &pow);

    if (num == 0){
        printf ("Indeterminated");
    }else{
        res = 1;
        for (int i=1; i <= pow; i++){
            res = res * num;
        }
        printf ("The result is: %i", res);
    }
}