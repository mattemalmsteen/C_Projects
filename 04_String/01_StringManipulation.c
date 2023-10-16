/* Write a program in which you declare a string (and initialize it) and you display on the screen:

    The string's size
    The first character
    The last character
    The position of the character 'c' if exists.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string[] = "This is a C string";

    int len = strlen(string);
    printf("The length of the string is: %i\n", len);
    printf("The first character is: %c\n", string[0]);
    printf("The last character is: %c\n", string[len-1]);

    for (int i = 0; i < len; i++){
        if (string[i] == 'c'){
            printf("The position of letter c is: %i", i+1);
        }
    }
}