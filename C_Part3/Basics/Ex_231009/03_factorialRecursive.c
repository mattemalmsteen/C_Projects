/*
Create a function with the following prototype: 
long factorial(long n)  
which calculates the factorial of n
Reminder factorial(n) equals n∗(n−1)∗(n−2)…3∗2∗n∗(n−1)∗(n−2)…3∗2∗
No main function needed
*/
#include <stdio.h>
long factorial(long n){
    if (n == 1){
        n = 1;
    }else if (n == 0){
        return 1;
    }else{
        n = n * factorial(n - 1);
    }
    return n;
}

int main (){
    long num = 4;
    printf("%d", factorial(num));
}