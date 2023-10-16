/*
We have the following struct Position { float x,y}
1. Create the struct using the typedef syntax
2. Code a function Position * average_position(Position* positions, int n_values) which takes an array of 
    Point and returns a Point containing the average of all positions (both for x and y). 
3. Using test_main function to create an array of struct and check your function in a simple setting
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Position {
    float x, y;
} Position;

Position *average_position(Position *positions, int n_values){
    Position *avg = (Position*)malloc(sizeof(Position));
    float x_res = 0;
    float y_res = 0;
    for (int i = 0; i < n_values; i++){
        x_res += positions[i].x;
        y_res += positions[i].y;
    }
    avg->x = x_res / n_values;
    avg->y = y_res / n_values;
    return avg;
}

int main(){

    Position p1[3];
    p1[0].x = 2;
    p1[1].x = 3.5;
    p1[2].x = 1.2;
    p1[0].y = 21;
    p1[1].y = 31.5;
    p1[1].y = 1.12;




}