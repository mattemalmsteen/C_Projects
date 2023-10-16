#include <stdio.h>

int main(){

    char word [] = {'h', 'e', 'l', 'l', 'o'};
    int size = sizeof(word)/sizeof(word[0]);
    for (int i = 0; i < size; i ++){
        printf ("%c", word[i]);
    }
}