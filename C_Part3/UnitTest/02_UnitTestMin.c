#include <stdio.h>

float minimum_three_numbers(float n1, float n2, float n3){
    if (n1 < n2 && n1 < n3){
        return n1;
    }else if(n2 < n1 && n2 < n3){
        return n2;
    }else if (n3 < n1 && n3 < n2){
        return n3;
    }
}

void test_minimum_three_numbers(){
    float n1 = 3.2;
    float n2 = 3.8;
    float n3 = 5.4;

    float exp_result = 3.2;
    if (minimum_three_numbers(n1, n2, n3) == exp_result){
        printf("Code ok!");
    }else{
        printf("There is a bug in the code!");
    }
}


void main(){
    test_minimum_three_numbers();
}