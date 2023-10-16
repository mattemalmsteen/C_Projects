#include <stdio.h>
#include <string.h>

void trimString(char str[]);

int main (){
    char s[] = "   Hello, World!  ";

    trimString(s);
}

void trimString (char str[]){
    int len = strlen(str);
    char trim[len+1];
    char space = ' ';
    int letterCount = 0;

    for (int i = 0; i < len; i++){
        if ( str[i] == space && (str [i-1] = space || str[i+1] == space)){
            trim[i] = '0';
        }else{
            trim[i] = str[i];
            letterCount++;
        }   
    }
    char outString[letterCount + 1];
    int j = 0;
    for (int i = 0; i < len; i++){
        if (trim[i] != '0'){
            outString[j] = trim[i];
            j++;
        }
    }
    outString[letterCount] = '\0';
    printf("%s", outString);
    printf("\n%i", strlen(outString));
}


