/*1. Make a Temperature struct with 

    a float temperature member
    a Position member

Create a function average_temperature(Temperature t1, Temperature t2) which computes the average of two temperatures struct*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Point{
    float x;
    float y;
} Point;

typedef struct Temperature{
    float temp;
    Point position;
}Temperature;

Temperature average_temperature(Temperature t1, Temperature t2){
    Temperature avg;
    avg.temp = (t1.temp + t2.temp) / 2;
    return avg;
}

void test_average_temperature(){
    Temperature t1;
    Temperature t2;
    Temperature average;

    t1.temp = 30.0;
    t2.temp = 32.0;
    float result = 31.0;

    average = average_temperature(t1, t2);

    if(average.temp != result){
        printf("BUUUUG!");
    }else{
        printf("Code ok!");
    }
}

int main(){
    test_average_temperature();
}