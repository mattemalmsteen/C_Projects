#include <stdio.h>

int main (){
    int tab [] = {5, 6, 9, 4, 3 ,15, 18, 20};
    int n;
    int pos = 0;

    int size = sizeof(tab) / sizeof(tab[0]);


    printf("What number do you want to search? ");
    scanf("%i", &n);

    for (int i = 0; i < size; i++ ){
        if (n == tab[i]){
            pos = i;
            printf("Your number is in the array at location %i", i);
            break;
        } else if (i == size -1){
            printf("-1");
        }
    }
}