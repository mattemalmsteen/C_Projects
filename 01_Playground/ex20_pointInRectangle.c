#include <stdio.h>

int main (){
    float x1, x2, y1, y2, xp, yp;
    printf("Please provide the first pair of coordinates x and y: ");
    scanf ("%f %f", &x1, &y1);

    printf("Please provide the second pair of coordinates x and y: ");
    scanf ("%f %f", &x2, &y2);

    printf("Please provide the point's coordinates x and y: ");
    scanf ("%f %f", &xp, &yp);

    if (x1 < x2 && y1 < y2){
        if (xp >= x1 && xp <= x2 && yp >= y1 && yp <= y2){
            printf("The point is into the rectangle!");
        }else{
            printf("The point is out of the rectangle!");
        }
    }else if (x1 < x2 && y1 > y2){
        if (xp >= x1 && xp <= x2 && yp <= y1 && yp >= y2){
            printf("The point is into the rectangle!");
        }else{
            printf("The point is out of the rectangle!");
        }   
    }else if (x1 > x2 && y1 > y2){
        if (xp <= x1 && xp >= x2 && yp <= y1 && yp >= y2){
            printf("The point is into the rectangle!");
        }else{
            printf("The point is out of the rectangle!");
        }
    }else if (x1 > x2 && y1 < y2){
        if (xp <= x1 && xp >= x2 && yp >= y1 && yp <= y2){
            printf("The point is into the rectangle!");
        }else{
            printf("The point is out of the rectangle!");
        }
    }else{
        printf("Not valid rectangle!");
    }
}