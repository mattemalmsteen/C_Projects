/*Write a recursive method: static void descend(int n) that displays integers from 1 to n in descending order.
Example: if n=5 -→ display  5 4 3 2 1*/

#include <stdio.h>

void descend(int n);

int main(){
    int num = 5;
    descend(num);

    return 0;
}

void descend(int n){
    if (n == 1){
        printf("%i\n", n);
    }else{
        printf("%i\n",n);
        descend(n - 1);
    }
}