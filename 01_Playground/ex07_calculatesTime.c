#include <stdio.h>

int main (void)
{
    int totalSec, hrs, min, sec;

    printf("Please enter the total amount of seconds: ");
    scanf ("%i", &totalSec);

    min = (totalSec / 60);
    sec = ((((double)totalSec/60) - min ) * 60);
    hrs = min / 60;
    min = ((((double) min / 60) - hrs) * 60);

    printf("The time is: %i hours, %i minutes and %i seconds", hrs, min, sec);

    return 0;
}