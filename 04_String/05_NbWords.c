/*Write a function that counts and returns the number of words in a provided string .*/

#include <stdio.h>
#include <string.h>

int wordsCount (char s[], int size);

int main(){
    char strA[]="Hello, this is a string.";
    int len = strlen(strA);

    /*printf("Type a string: \n");
    fgets(strA, sizeof(strA), stdin);*/

    int words = wordsCount(strA, len);
    printf("There are %i words in your phrase.", words);
}

int wordsCount (char s[], int size){
    int spacesNum = 0;
    int wordsNum = 0;
    char space = ' ';

    for (int i = 0; i < size; i++){
        if (s[i] == space){
            spacesNum++;
        }
    }
    if (s[0] == space || s[size] == space){
        wordsNum = spacesNum;
    }else if (s[0] == space && s[size] == space)
    {
        wordsNum = spacesNum - 1;
    }else{
        wordsNum = spacesNum + 1;
    }
    return wordsNum;
}