#include <stdio.h>

int main (){
    float dam, take;

    printf ("Please enter the damage amount: ");
    scanf("%f", &dam);

    take = dam * 0.1;

    if (take > 10 && take < 500){
        printf ("The deducible taken is: %g euros", take);
    }
    else if (take <= 10){
        printf("The deducible taken is: 10 euros");
    }
    else{
        printf("The deducible taken is 500 euros.");
    }
}