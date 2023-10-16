#include <stdio.h>

void charType (char c);

int main (){

    char vc;

    printf("Please enter a character: ");
    scanf("%c", &vc);
    charType(vc);

    return 0;    
}

void charType (char c){
    switch (c){
        case 'A' ... 'Z':
                printf ("Uppercase");
                break;
        case 'a' ... 'z':
                printf ("lowercase");
                break;
        case '0' ... '9':
                printf ("number");
                break;
        default:
            printf ("-");
    }
}