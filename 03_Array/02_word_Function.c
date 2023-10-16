#include <stdio.h>

void word (int n);

int main(){
    int wLength;
    printf("Enter the length of your word: ");
    scanf("%i", &wLength);
    word(wLength);
}


void word (int n){
    char letter;
    char wordIn [n];
    for (int i = 0; i < n; i++){
        printf("Enter the letter number %i of your word: ", i+1);
        scanf(" %c", &letter);
        wordIn [i] = letter;
    }
    printf("Your word is: ");
    for (int i = 0; i < n; i ++){
        printf ("%c", wordIn[i]);
            }
}