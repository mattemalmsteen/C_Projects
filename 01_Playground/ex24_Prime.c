#include <stdio.h>

int main(){
    int num, count;

    printf("Please enter a number: ");
    scanf("%i", &num);
    count = 0;
    for ( int i = num -1; i > 1 ; i--){
        if (num % i == 0){
            count++;
        }
    }
    if (count != 0){
        printf("The number %i is not prime.", num);
    }else{
        printf("The number %i is prime.", num);
    }
}