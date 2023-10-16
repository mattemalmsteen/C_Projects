#include <stdio.h>

void min (float n1, float n2);

int main (){

    float num1, num2;

    printf("Please enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    min(num1, num2);

    return 0;
}


void min (float n1, float n2){ // Se volessi usare il valore min trovato qui, allora il tipo void non va bene, ma devo usare int e ritornare il risultato, altrimenti nella main non ho il risultato di questa funzione
    if (n1 < n2){
        printf("The numer %g is the minimum", n1);
    }
    else if (n1 > n2){
        printf("The number %g is the minimum", n2);
    }
    else{
        printf ("The numbers are equals");
    }
}