#include <stdio.h>
#include <stdlib.h>

int Add (int a, int b){
    return a + b;
}


int main(){

    int c;
    int (*p)(int, int); //pointer used to point a function and not a variable
    p = &Add;
    c = (*p)(2, 3); //dereferencing and executing the funtion
    
    //alternative notation:
    p = Add; //function will return an address
    c = p(2, 3);

    printf("Result: %d", c);
}