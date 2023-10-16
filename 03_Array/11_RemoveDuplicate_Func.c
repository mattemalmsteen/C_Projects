#include <stdio.h>

int location (int arr[], int size);
void newArr (int arr[], int size, int loc);

int main(){


    int a[5] = {1, 2, 6, 7, 7}; // rendere dinamico l'input dell'array
    int dim = 5;

    printf("Array a:\n");
    for (int i = 0; i< dim; i++){
        printf("%i ", a[i]);
    }

    //Miglioramento: verificare se c'è un altro duplicato

    int duplicate_pos = location(a, dim);   // This function get the location of the duplicate

    newArr(a, dim, duplicate_pos);          // This function display the cleaned array

    return 0;    
}


int location (int arr[], int size){
    // In questo modo verifico dov'è il primo duplicato (potrebbe vaer senso metterlo in una funzione in modo da richiamarlo?)
    int pos = 0;
    for (int j = 0; j < size; j++ ){
        for (int i = j+1; i < size; i++){
            if (arr[j] == arr[i]){
                pos = i;
                break;
            }
        }
    }
    return pos;
}


void newArr (int arr[], int size, int loc){
    // verifico se pos è = all'indice più alto di a e in tal caso lo tronco
    int sizeb = size - 1;
    int b[sizeb];
    if (loc == (size-1)){
        for (int i = 0; i < sizeb; i++){
            b[i] = arr[i];
        }
    }else{                  // altrimenti popolo direttamente b, in funzione della pos
        for (int i = 0; i < loc; i++){      //copy lowers
            b[i] = arr[i];
        }

        for (int i = loc; i < sizeb; i ++){   //copy highers
            b[i]=arr[i+1];                      // volendo rimuovere l'index "pos" da a, devo fare i+1
        }
    }
    printf("\nArray b:\n");
    for (int i = 0; i < sizeb; i++){
        printf("%i ", b[i]);
    }
}