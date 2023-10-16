#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int check(char s[], int len);

int main(){
    char s[50];
    int size;
    do{
        printf("Enter a number: ");
        scanf(" %s", &s);
        size = strlen(s);
        // printf("\n%s", s);
    } while (check(s, size) < size);
}

int check(char s[], int len){
    int count = 0;
    if (len < 3 && len > 0){
        for (int i = 0; i < len; i++){
            if ((s[i] >= '0' && s[i] <= '9')){
                count++;
            }else{
                printf("Invalid input!\n");
                break;
            }
        }
        printf("%i\n", count);
    }
    return count;
}
