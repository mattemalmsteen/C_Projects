/*
Create a Struct Position. 
1. In the test_main function create a Position p1 and modify their value. 
2. Create a Position * p_pointer1 and affect it to the adress of p1.
3. Modify p1 value from the p_pointer1 and display the values
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Position{
    int value;
} Position;

int main(){
    Position p1;
    p1.value = 5;

    printf("Initial value: %d\n", p1.value);

    Position *p_pointerp1 = &p1;
    p_pointerp1->value = 52;

    printf("Final value: %d\n", p_pointerp1->value);

}