#include <stdio.h>
#include <stdlib.h>

int value(int x, int y){
    return x+1, y+1;
}

int main(){
    int a = 1;
    int b = 2;
    printf("%i %i", value(a, b));
}