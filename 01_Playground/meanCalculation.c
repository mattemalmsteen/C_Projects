#include <stdio.h>

int main (void)
{
    float num1, num2, num3, num4, num5, mean;

    printf ("Please enter 5 numbers to calculate the mean: \n");
    scanf ("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);

    mean = (num1 + num2 + num3 + num4 + num5) / 5;

    printf("The mean value is: %f", mean);

    return 0;
}