#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    const float PI = 3.1415;
    float rad;
    float area;

    printf ("Enter the radius value: ");
    scanf("%f",&rad);
    printf ("%f", rad);
    area = PI * rad * rad;

    printf ("The area of the circle is: %f.", area);
}