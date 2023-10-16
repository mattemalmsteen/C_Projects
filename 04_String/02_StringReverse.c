/*Write a program that takes a string as a parameter and displays the string in reverse.*/

#include <stdio.h>
#include <string.h>

int main (){

    char strA[30];
    printf("Type a string: \n");
    fgets(strA, sizeof(strA), stdin);

    int len = strlen(strA);

    char strB[len];

    for (int i = len - 1; i >= 0; i--){
        strB[len-i] = strA[i];
    }
    strB[len+1] = '\0';

    printf("The reverse is: %s", strB);
}