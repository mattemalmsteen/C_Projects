#include <stdio.h>

int main (){

    // Variables declaration
    int value;
    char vc;

    printf("Please enter a character: ");
    scanf("%c", &vc);

    // Convert vc in type int to compare the value to the ASCII code 

    value = (int) vc;

    // Checking the corrispondace between ASCII and user's value

    switch (value){
        case 65 ... 90:
                printf ("Uppercase");
                break;
        case 97 ... 122:
                printf ("lowercase");
                break;
        case 48 ... 57:
                printf ("number");
                break;
        default:
            printf ("-");
    }

    //sarebbe possibile anche fare la comparazione direttamente tra A - Z, a - z.
}