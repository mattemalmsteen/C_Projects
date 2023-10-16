#include <stdio.h>

int main (){
    const float PI = 3.1415;
    float r1, r2, area1, area2;

    printf("Enter the values for r1 and r2; ");
    scanf ("%f %f", &r1, &r2);

    area1 = r1 * r1 * PI;
    area2 = r2 * r2 * PI;

    if (area1 > area2){
        printf("The ring area is: %f", area1 - area2);
    }
    else{
        printf("The ring area is: %f", area2 - area1);
    }
}