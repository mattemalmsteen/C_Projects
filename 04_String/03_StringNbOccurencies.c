/*Write a function that counts and returns the number of times a character is found in a string. 
The character and the string are provided as parameters. */

#include <stdio.h>
#include <string.h>

int occurences (char s[], int size, char find);

int main(){
    char strA[]="lollo lollo";
    int len = strlen(strA);
    char c;

    /*printf("Type a string: \n");
    fgets(strA, sizeof(strA), stdin);*/

    printf("Enter the character you  want to check: \n");
    scanf("%c", &c);

    int cRepeat = occurences(strA, len, c);
    printf("The %c charachter occures %i times.", c, cRepeat);
}


int occurences (char s[], int size, char find){
    int occ = 0;
    for (int i = 0; i < size; i++){
        if (find == s[i]){
            occ++;
        }
    }
    return occ;
}

