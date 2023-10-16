/*
Using any previous struct you like, create a an array of struct allocated on the heap using malloc or calloc.
Modify data of the first entry of the array and display it
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Position{
    float x, y;
} Position;

void modiPos(Position *p, float x, float y){
    Position *new = p;
    new[0].x = x;
    new[0].y = y;
    new[1].x = x+2;
    new[1].y = y+2;
    new[2].x = x+3;
    new[2].y = y+3;
    return;
}

int main(){
    Position *p1 = (Position *)malloc(sizeof(Position) * 3); //create an array of 3 Position struct
    p1[0].x = 2.5;
    p1[0].y = 3;
    p1[1].x = 4.2;
    p1[1].y = 6.6;
    p1[2].x = 5.2;
    p1[2].y = 0.6;

    printf("Before modification:\n");
    printf("x0= %g, y0=%g\n", p1[0].x, p1[0].y);
    printf("x1= %g, y1=%g\n", p1[1].x, p1[1].y);
    printf("x2= %g, y2=%g\n", p1[2].x, p1[2].y);

    modiPos(p1, 10, 10);
    
    printf("After modification:\n");
    printf("x0= %g, y0=%g\n", p1[0].x, p1[0].y);
    printf("x1= %g, y1=%g\n", p1[1].x, p1[1].y);
    printf("x2= %g, y2=%g\n", p1[2].x, p1[2].y);
}