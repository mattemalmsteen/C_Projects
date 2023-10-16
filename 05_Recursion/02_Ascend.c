/*Write a recursive method: static void ascend(int n) That displays integers from 1 to n in ascending order.

Example: if n=5 -→ display  1 2 3 4 5*/

#include <stdio.h>

void ascend(int n);

int main(){
    int num = 1;
    ascend(num);

    return 0;
}

void ascend(int n){
    if (n == 5){
        printf("%i\n", n);
        return;
    }else{
        printf("%i\n", n);
        ascend(n + 1);
        return;
    }
}