/*Write a function that counts and returns the number of vowels in a provided string.*/

#include <stdio.h>
#include <string.h>

int vowelsCount (char s[], int size);

int main(){
    char strA[]="lollo lollo aa yy uu";
    int len = strlen(strA);

    /*printf("Type a string: \n");
    fgets(strA, sizeof(strA), stdin);*/

    int vowels = vowelsCount(strA, len);
    printf("There are %i voewls.", vowels);
}


int vowelsCount (char s[], int size){
    int occ = 0;
    for (int i = 0; i < size; i++){
        switch (s[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
        case 'w':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y':
        case 'W':
            occ++;
            break;        
        default:
            break;
        }
    }
    return occ;
}