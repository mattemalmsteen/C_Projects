#include <stdio.h>

float take (float d);

int main (){
    float dam;

    printf ("Please enter the damage amount: ");
    scanf("%f", &dam);

    float dedTake = take(dam);

    if (dedTake > 10 && dedTake < 500){
        printf ("The deducible taken is: %g euros", dedTake);
    }
    else if (dedTake <= 10){
        printf("The deducible taken is: 10 euros");
    }
    else{
        printf("The deducible taken is 500 euros.");
    }

    return 0;
}


float take (float d){
    return d * 0.1;
}