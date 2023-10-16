#include <stdio.h>

float power(float x, float y);

int main (){
    float a = 2;
    float b = -4;

    printf("%g", power(a, b));
    return 0;
}


float power(float x, float y){
    if (y == 0){
        return 1;
    }else if (y > 0){
        return x * power(x, y - 1);
    }else{
        return 1/x * (power(x, y + 1));
    }
}