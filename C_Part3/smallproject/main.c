#include "header.h"
#include <stdio.h>

int main(){
    Point p1;
    p1.x=3.14;
    p1.y=2.66;
    printf("x is %f and y is %f\n", p1.x, p1.y);
    float avg = average(p1);
    printf("The average is %f\n", avg);
}