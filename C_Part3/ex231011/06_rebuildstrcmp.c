/*Without using strcmp, code a function int are_string_equals(char* str1, char* str2) 
which returns 1 if str is the same as str2 and 0 otherwise*/

#include <stdio.h>
#include <string.h>

int are_string_equals(char* str1, char* str2){
    if (strlen(str1) != strlen(str2)){
        return 0;
    }else{
        for (int i = 0; i < strlen(str1); i++){
            if (str1[i] != str2[i]){
                return 0;
            }
        }
        return 1;
    }
}


int main(){
    char *str1= "hello hooman";
    char *str2= "hello hooman";
    int r = are_string_equals(str1, str2);
    printf("%d", r);
}
    