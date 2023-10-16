#include <stdio.h>

int main (void)
{
    float real = 4.35;
    int int_part = (int) real;
    float decimal = real - int_part;

    printf("The integer part is: %i. The decimal part is %f.", int_part, decimal);

    return 0;
}