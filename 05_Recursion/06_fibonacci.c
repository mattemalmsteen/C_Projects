#include <stdio.h>

int fibonacci(int n);

int main (){

    int num = 6;

    printf("%i", fibonacci(num));
    return 0;
}

int fibonacci(int n){
    if (n == 1){
        return 1;
    }else if( n == 0){
        return 0;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}