#include <stdio.h>

int main(){

    int score;
    printf("Please enter your average score: ");
    scanf("%i", &score);

    switch (score)
    {
    case 0 ... 9:
        printf ("Failed!");
        break;
    case 12:
    case 13:
        printf ("Fairly good");
        break;
    case 14:
    case 15:
        printf ("Good");
        break;
    case 16 ... 20:
        printf ("Very good!");
        break;    
    default:
        printf("-");
        break;
    }
}