/*
create a function Point* new_point(float x, float y) which creates and return a new point
If you want to test your function use the test_main function acting like a pseudo-main
*/
#include<stdio.h>
#include <stdlib.h>

typedef struct Point{
    float x;
    float y;
} Point;

Point* new_point(float x, float y){
    Point *new_point = (Point *)malloc(sizeof(Point));
    new_point->x = x;
    new_point->y = y;
    return new_point;
}


void main(){
    Point *new; 
    float x = 3.14;
    float y = 2.54;
    new = new_point(x, y);
    printf("%f and %f", new->x, new->y);
}