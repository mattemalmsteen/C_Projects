#include <stdio.h>

int main ()
{
    int num;
    printf ("Please enter an integer number: ");
    scanf ("%i", &num);

    if (num %2 == 0)
    {
        printf("The numer is even");
    }
    else{
        printf("The number is odd");
    }

    return 0;
}