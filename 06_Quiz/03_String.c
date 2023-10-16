#include <stdio.h>
#include <string.h>

int count_digits_in_string(char s[], int size);

int main(){

    char a[] = "Hello1234567890";
    int len = strlen(a);
    int dig = count_digits_in_string(a, len);

    printf("%i", dig);
}

int count_digits_in_string (char s[], int size){
    int countDigits = 0;
    for (int i = 0; i< size; i ++){
        if (s[i] >= '0' && s[i] <= '9'){
           countDigits++; 
        }
    }
    return countDigits;
}