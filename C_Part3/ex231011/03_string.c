/*
1. Create a variable str1 container “hello chicken”
2. Create a variable str2 containing “hello hooman”
3. use strlen to compute the str length, store the result in a variable r1
4. use strcmp on str1 and str2 and store the result in a variable r2
5. Display r1 and r2
*/

#include <stdio.h>
#include <string.h>

int main(){
    char *str1 = "hello chicken";
    char *str2 = "hello hooman";

    int r1 = strlen(str1);
    int r2 = strcmp(str1, str2);

    printf("The strlen of str1 is %d\n", r1);
    printf("The comparison get the value %d", r2);
}
