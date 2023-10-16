#include <stdio.h>

int main ()
{
    int num;
    int abs;
    printf ("Please enter an integer number: ");
    scanf ("%i", &num);

    if (num > 0){
        num = num;
    }
    else {
        num = -num;
    }
    printf("The absolute value of your number is: %i", num);
}