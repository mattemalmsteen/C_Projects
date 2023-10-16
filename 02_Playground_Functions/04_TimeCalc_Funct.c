#include <stdio.h>
int timeCalc (int h, int m, int s);

int main (void)
{
    int hrs, min, sec;

    printf("Please enter the time in hours, minutes, seconds: ");
    scanf ("%i %i %i", &hrs, &min, &sec);

    int totalSec = timeCalc(hrs, min, sec);
    printf("The toal time in second is: %i", totalSec);

    return 0;
}


int timeCalc (int h, int m, int s){
    return (h*3600 + m*60 + s);
}