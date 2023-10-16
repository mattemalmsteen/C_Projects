#include <stdio.h>

float areaCircle(float r); //Function declaration

int main(){

    float radius;

    printf ("Give me a radius: ");
    scanf("%f", &radius);

    float area = areaCircle (radius);

    printf("The area of the circle is %g", area);

    return 0;
}


float areaCircle(float r){  // Function definition

    const float PI = 3.1415;
    float area = r * r * PI;
    return area; // potrei anche ritornare direttamente la riga sopra
}