#include <stdio.h>

int main (){

    float num1, num2;

    printf("Please enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    if (num1 < num2){
        printf("The numer %f is the max", num1);
    }
    else if (num1 < num2){
        printf("The number %f is the max", num2);
    }
    else{
        printf ("The numbers are equals");
    }
}