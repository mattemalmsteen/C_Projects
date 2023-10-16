#include <stdio.h>

int main(){

    int num;

    printf("Please enter the number to calculate factorial: ");
    scanf("%i", &num);

    if (num == 0){
        printf("The factorial of 0 is 1.");
    }else{
        for (int i = num - 1; i >1 ; i--){
            num = num * i;
        }
        printf("The factorial is: %i", num);
    }
}