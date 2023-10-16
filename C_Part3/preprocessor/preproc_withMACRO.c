#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define UNIVERSE 43
//#define log(message) printf("message: %s, line: %d\n", message, __LINE__)
#define ASSERT(assertion){\
    printf("line: %d\n", __LINE__);\
    printf("file name: %s\n", __FILE__);\
    if (assertion == false){\
        printf("ERROR\n");\
        exit(0);\
    }\
}

void isEven(int val){
    if (val % 2 != 0)
        ASSERT(false);
}

int main(){
    int v1;
    v1 = UNIVERSE;

    isEven(v1);

    //printf("%d", v1);
}