/*We want to compute the distance between two Position struct (float x,y)
The formula is sqrt of ((x1−x2)2+(y1−y2)2))(​(x1−x2)2+(y1−y2)2))
1. Create the struct Position 
2. code a function float distance(Position p1, Position p2) that returns the position between to positions*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Position{
    float x, y;
} Position;

float distancePos(Position p1, Position p2){
    float distance = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
    return distance;
}

int main(){
    Position p1;
    p1.x = 5;
    p1.y = 3;

    Position p2;
    p2.x = 3;
    p2.y = 6;

    float distance = distancePos(p1, p2);
    printf("%f", distance);
}