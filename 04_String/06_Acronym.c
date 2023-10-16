/*
Write a program that given a sentence, display the corresponding acronym.
An acronym of a sentence is composed from the first letter of each of its words in uppercase.
Example: If the sentence is '' java developement kit '', the program display '' JDK '
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void acronym (char s[], char out[], int size);

int main(){
    char strA[]="C programming is amazing";
    int len = strlen(strA);
    char acr[len];

    acronym(strA, acr, len);

    return 0;
}


void acronym (char s[], char out[], int size){
    /*
    verifico se c'è uno spazio all'inizio?
    prendo in input anche una stringa out, delle stesse dimensioni di s in cui andrò ad inserire le iniziali*/
    char space = ' ';

    out[0] = s[0];      //verifico se il primo carattere è uno spazio oppure se è un carattere
    for (int i = 2; i < size; i++){
        if (s[i-1] == space && s[i] != space){
            out[i] = s[i];
        }
    }

    /*for (int i = 1; i<size; i++){
        if (s[i-1] == space && s[i] != space){
            if (isupper(s[i])){
                out[i-1] = s[i];
            }else{
                out[i-1] = toupper(s[i]);
            }
        }
    }*/

    printf("The acronym is: %s", out);
}