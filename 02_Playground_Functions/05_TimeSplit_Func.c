#include <stdio.h>

void time (int timeSec);

int main (){
    int totalSec;

    printf("Please enter the total amount of seconds: ");
    scanf ("%i", &totalSec);
    time(totalSec);
    return 0;
}


void time (int timeSec){
    int h = (timeSec / 3600);
    int m = ((((double) timeSec / 3600) - h) * 60);
    int s = timeSec - h * 3600 - m * 60;

    printf("The time is: %i hours, %i minutes and %i seconds",h, m,s);
}