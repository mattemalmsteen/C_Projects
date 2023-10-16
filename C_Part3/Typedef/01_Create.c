#include<stdio.h>

typedef struct Point{
    float x;
    float y;
} Point;


int main(void){
    
    Point a;
    a.x=3.14;
    a.y=2.55;
    
    
    printf("X value is %f\n", a.x);    
    printf("Y value is %f\n", a.y);
}