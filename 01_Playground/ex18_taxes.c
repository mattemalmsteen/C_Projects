#include <stdio.h>

int main (){
    float income, tax;

    printf ("Provide your income: ");
    scanf ("%f", &income);

    if (income <= 10000){
        tax = 0;
    } else if ( income > 10000 && income <= 30000){
        tax = (income - 10000) * 0.1;
    }else if (income > 30000 && income <= 60000){
        tax = (income - 30000) * 0.3 + (0.1 * 30000);
    }else if (income > 60000){
        tax = (income - 60000) * 0.5 + (0.3 *30000) + (0.1 * 20000);
    }
    printf("Your tax is %g", tax);
}