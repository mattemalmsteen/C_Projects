#include <stdio.h>

int absVal (int n);

int main (){
    int num;

    printf ("Please enter an integer number: ");
    scanf ("%i", &num);

    int abs = absVal(num);
    printf("The absolute value of your number is: %i", abs);

    return 0;
}


int absVal (int n){ 
    if (n > 0){
        return n;
    }
    else {
        return -n;
    }
}