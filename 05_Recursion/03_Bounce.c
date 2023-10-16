/*Write a recursive method: 
static void bounce(int n) That produces the same result as 'descend' and 'ascend' but without using the 'ascend' and 'descend' functions*/

#include <stdio.h>

void bounce(int n);

int main(){
    int num = 5;
    bounce(num);

    return 0;
}

void bounce(int n){
    if (n == 0){
        return;
    }else{
        printf("%i\n", n);
        bounce(n - 1);
        printf("%i\n", n);
    }
}