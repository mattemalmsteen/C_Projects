#include <stdio.h>

void max (float n1, float n2);

int main (){

    float num1, num2;

    printf("Please enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    max(num1, num2);

    return 0;
}


void max (float n1, float n2){
    if (n1 > n2){
        printf("The numer %g is the max", n1);
    }
    else if (n1 < n2){
        printf("The number %g is the max", n2);
    }
    else{
        printf ("The numbers are equals");
    }
}