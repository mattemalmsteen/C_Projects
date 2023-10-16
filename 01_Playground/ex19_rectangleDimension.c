#include <stdio.h>

int main (){
    float x1, x2, y1, y2, wid, len;

    printf("Please provide the first pair of coordinates x and y: ");
    scanf ("%f %f", &x1, &y1);

    printf("Please provide the second pair of coordinates x and y: ");
    scanf ("%f %f", &x2, &y2);

    if (x1 > x2){
        printf("The width is: %g\n", x1 - x2);
    }else{
        printf("The width is: %g\n", x2 - x1);
    }

    if (y1 > y2){
        printf("The length is: %g", y1 - y2);
    }else{
        printf("The length is: %g", y2 - y1);
    }
}