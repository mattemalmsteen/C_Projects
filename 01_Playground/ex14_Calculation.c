#include <stdio.h>

int main(){

    int num1, num2;
    char op;

    printf("Please type the simybol of the operation you want to execute: ");
    scanf("%c", &op);   //se sposto questo scan f dopo il successivo devo aggiungere uno spazio prima della c, altrimenti non funziona correttamente. In sostanza se chiedo un carattere dopo aver inserito dei numeri prima il buffer necessita dello spazio prima della c. 

    printf("Please provide two integers: ");
    scanf("%i %i", &num1, &num2);

    // Make the switch comparing op int value to ASCII code
    switch (op)
    {
    case 43:
        printf("The sum is: %i", num1 + num2);
        break;
    case 45:
        printf("The subtraction is: %i", num1 - num2);
        break;
    case 42:
        printf("The moltiplication is: %i", num1 * num2);
        break;
    case 47:
        printf("The division is: %f", (float)num1 / num2);
        break;   
    default:
        printf ("Invalid input");
        break;
    } // anche in questo caso potevo confrontare op con +,-,*,/ invece che usare ASCII code
}