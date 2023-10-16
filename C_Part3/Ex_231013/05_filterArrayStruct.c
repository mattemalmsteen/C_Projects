/*
We want to build a function which retrieves all Position structures from an Array which are close to a given Position p. 
For that we use the distance function from the previous exercice. 
code a function Position* closest_positions(Position* positions, Position query, float maximum_distance) 
which return all Position whose distance with query is below or equal to maximum_distance

Bonus : make s ure that the returned allocated array is not bigger than needed using realloc
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Position{
    float x, y;
} Position;

float distancePos(Position *p1, Position *p2){
    float distance = sqrt(pow((p1->x - p2->x), 2) + pow((p1->y - p2->y), 2));
    return distance;
}

Position* closest_positions(Position* positions, Position query, int array_size, float maximum_distance){
    int closeCounter = 0;
    for (int i = 0; i < array_size;  i++){
        if(distancePos(&positions[i],&query) <= maximum_distance){
            closeCounter++;
        }
    }
    Position *closest_positions = (Position *)malloc(sizeof(Position)*closeCounter);
    int i = 0;
    int j = 0;

    while (i < array_size){
        if (distancePos(&positions[i],&query) <= maximum_distance){
            closest_positions[j] = positions[i];
            i++;
            j++;
        }
        i++;
    }
    if(j > 0){
        for (int i = 0; i < closeCounter; i++){//I could print in the main changing the int array_size arg to a pointer to the main variable and use it to print in main
            printf("The point n.%d of the new array is: x=%g, y=%g\n", i + 1, closest_positions[i].x, closest_positions[i].y);
        }
        return closest_positions;
    }else{
        printf("No points closer to the input!\n");
        return 0;
    }
}

int main(){
    Position p1[3];
    p1[0].x = 2;
    p1[0].y = 7;
    p1[1].x = 4;
    p1[1].y = 52;
    p1[2].x = 1;
    p1[2].y = 9;

    Position p;
    p.x = 2;
    p.y = 8;

    float maxDistance = 2.5;

    Position *closest = closest_positions(p1, p, 3, maxDistance);
}
