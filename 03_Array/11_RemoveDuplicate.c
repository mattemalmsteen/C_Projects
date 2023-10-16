#include <stdio.h>

int main(){


    int a[5] = {1, 2, 6, 7, 7}; // rendere dinamico l'input dell'array
    int size = 5;
    int pos = 0;

    printf("Array a:\n");
    for (int i = 0; i< size; i++){
        printf("%i ", a[i]);
    }

    // In questo modo verifico dov'è il primo duplicato (potrebbe vaer senso metterlo in una funzione in modo da richiamarlo?)
    for (int j = 0; j < size; j++ ){
        for (int i = j+1; i < size; i++){
            if (a[j] == a[i]){
                pos = i;
                break;
            }
        }
    }
    //printf("%i\n", pos);      //stampo pos per verifica

    // verifico se pos è = all'indice più alto di a e in tal caso lo tronco
    int sizeb = size - 1;
    int b[sizeb];
    if (pos == (size-1)){
        for (int i = 0; i < sizeb; i++){
            b[i] = a[i];
        }
    }else{                  // altrimenti popolo direttamente b, in funzione della pos
        for (int i = 0; i < pos; i++){      //copy lowers
            b[i] = a[i];
        }

        for (int i = pos; i < sizeb; i ++){   //copy highers
            b[i]=a[i+1];                      // volendo rimuovere l'index "pos" da a, devo fare i+1
        }
    }
    printf("\nArray b:\n");
    for (int i = 0; i < sizeb; i++){
        printf("%i ", b[i]);
    }
}