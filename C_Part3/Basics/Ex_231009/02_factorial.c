/*
Create a function with the following prototype: 
long factorial(long n)  
which calculates the factorial of n
Reminder factorial(n) equals n∗(n−1)∗(n−2)…3∗2∗n∗(n−1)∗(n−2)…3∗2∗
No main function needed
*/
#include <stdio.h>
long factorial(long n){
    if (n == 0){
        return 1;
    }else{
        for (int i = n-1; i >= 1; i--){
            n = n * i;
        }
    return n;
    }
}

int main (){
    long num = 5;
    printf("%d", factorial(num));
}