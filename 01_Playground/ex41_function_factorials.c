#include <stdio.h>
int factorial (int nb){
    for (int i = nb - 1; i >1 ; i--){
            nb = nb * i;
    }
    return nb;
}

int main(){
    int num1, num2, num3;

    printf("Enter three numbers to calculate their factorial: ");
    scanf("%i %i %i", &num1, &num2, &num3);
    int fact1 = factorial(num1);
    int fact2 = factorial(num2);
    int fact3 = factorial(num3);
    printf("The factorials are: %i - %i - %i", fact1, fact2, fact3);
    return 0;
}