#include <stdio.h>
#include <stdlib.h>

void A(){
    printf("Hello!");
}

void B (void (*ptr)())
{//function pointer as argument 
    ptr(); // call back function that ptr points to
}

int main(){
    void (*p)() = A; //the function A return void and doesn't require arg, so the ptr
    B(p); //B(A), A is a callback function

    //p punta ad A, B richiede un puntatore come arg, gli passo p che punta ad A, quindi B chiamerà A.
}