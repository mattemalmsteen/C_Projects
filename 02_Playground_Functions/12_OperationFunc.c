#include <stdio.h>

int operation (char oper, int n1, int n2);

int main(){

    int num1, num2;
    char op;

    printf("Please type the simybol of the operation you want to execute: ");
    scanf("%c", &op);   

    printf("Please provide two integers: ");
    scanf("%i %i", &num1, &num2);

    int result = operation(op, num1, num2);
    printf("The result of your operation is: %i", result);

    return 0;
}

int operation (char oper, int n1, int n2){
    switch (oper)
    {
    case '+':
        return (n1 + n2);
        break;
    case '-':
        return (n1 - n2);
        break;
    case '*':
        return (n1 * n2);
        break;
    case '/':
        return (n1 / n2);
        break;   
    } 
}