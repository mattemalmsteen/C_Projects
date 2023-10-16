#include <stdio.h>

int main (void)
{
    int totalSec, hrs, min, sec;

    printf("Please enter the total amount of seconds: ");
    scanf ("%i", &totalSec);

    hrs = (totalSec / 3600);
    min = ((((double) totalSec / 3600) - hrs) * 60);
    sec = totalSec - hrs * 3600 - min * 60;

    printf("The time is: %i hours, %i minutes and %i seconds", hrs, min, sec);

    return 0;
}