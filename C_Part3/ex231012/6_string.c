/*Code a function name char* str_concat(char* str1, char* str2) 
which returns a news string with the appropriate lenght*/
#include <stdio.h>
#include <stdlib.h>

char* str_concat(char* str1, char* str2){
    int count1 = 0;
    int count2 = 0;

    while (str1[count1] != '\0'){
        count1++;
    }
    while (str2[count2] != '\0'){
        count2++;
    }
    int len = count1 + count2;
    char *str3 = (char*)malloc(sizeof(char)*(len));
    for (int i = 0; i < count1; i++){
        str3[i] = str1[i];
    }
    for (int i = 0; i < count2; i++){
        str3[i + count1] = str2[i];
    }
    str3[len] = '\0';
    return str3;
}

int main(){

    char* str1 = "Hello";
    char *str2 = "Bye";

    char *str3 = str_concat(str1, str2);
    printf("\n%s\n", str3);
}