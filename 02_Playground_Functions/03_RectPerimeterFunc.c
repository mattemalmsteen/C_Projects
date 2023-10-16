#include <stdio.h>

float rectanglePerim (float l, float w);

int main(){
    float wid, len, p;

    printf("Please enter the width of the rectangle: ");
    scanf ("%f", &wid);

    printf("Please enter the length of the rectangle: ");
    scanf("%f", &len);
    p = rectanglePerim(wid, len);
    printf ("The rectangle's perimeter is: %g", p );
    
    return 0;
}

float rectanglePerim (float l, float w){
    return (2 * (w + l));
}