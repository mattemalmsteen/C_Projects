#include <stdio.h>

int main (){

    float num1, num2, num3, num4;

    printf("Please enter four numbers: ");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4){
        printf("The numer %f is the max", num1);
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4){
        printf("The number %f is the max", num2);
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4){
    printf("The number %f is the max", num3);
    }
    else if (num4 > num1 && num4 > num2 && num4 > num3){
    printf("The number %f is the max", num4);
    }
}