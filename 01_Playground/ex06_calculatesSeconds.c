#include <stdio.h>

int main (void)
{
    float hrs, min, sec, totalSec;

    printf("Please enter the time in hours, minutes, seconds: ");
    scanf ("%f %f %f", &hrs, &min, &sec);

    totalSec = hrs*3600 + min*60 + sec;

    printf("The toal time in second is: %f", totalSec);


    return 0;
}