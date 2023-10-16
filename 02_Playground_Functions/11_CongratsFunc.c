#include <stdio.h>

void congrat (char sex, int m);

int main()
{
    char man;
    int mark = 8;
    printf("Are you a man? (y, n)");
    scanf("%c", &man);

    printf("Which is your average? ");
    scanf("%i", &mark);

    congrat (man, mark);

    return 0;
}


void congrat (char sex, int m){
    if (m >= 10)
    {
        if (sex == 'y')
            printf("congrats mr");
        else
            printf("congrats lady");
    }
    else
    {
        printf("Hard luck :-(");
    }
}