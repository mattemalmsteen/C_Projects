#include <stdio.h>

int sum(int n);

int main (){
    int num = 8;

    printf("%i", sum(num));
    return 0;
}


int sum(int n){
    if (n == 1){
        return 1;
    }else{
        return n + sum(n - 1);
    }
}