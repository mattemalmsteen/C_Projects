#include <stdio.h>
#include <stdbool.h>

bool oddEven (int n);

int main ()
{
    int num;

    printf ("Please enter an integer number: ");
    scanf ("%i", &num);

    if (oddEven(num)){  //Posso chiamare la funzione booleana direttamente nella condizione di if, ma è sensato farlo solo se questa condizione ci serve una volta o poche, se invece servisse usarla più volte può avere senso usare una variabile in cui mettere il risultato della funzione e riutilizzare la variabile invece che eseguire sempre la funzione quando serve il valore
        printf("The number is odd");
    }else{
        printf("The number is even");
    }

    return 0;
}


bool  oddEven (int n){ 
    if (n %2 == 0)
    {
        return false;
    }
    else{
        return true;
    }
}