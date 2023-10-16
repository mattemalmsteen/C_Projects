#include <stdio.h>

void insert (int arr[], int n, int dim);

int main (){

    int tab [] = {1, 2, 4, 5};
    int num;
    int size = sizeof(tab) / sizeof(tab[0]);    //size of the current input array
    int dim = size + 1;                         //size of the array to output by the function


    printf("This is the sorted array:\n");
    for (int i = 0; i < size; i++){
        printf("%i ", tab[i]);
    }

    printf("\nEnter the number to add to the array: ");
    scanf("%i", &num);

    insert(tab, num, dim);
    return 0;
}





void insert (int arr[], int n, int dim){
    int pos = 0;
    int newArr[dim];

    if (n > arr[dim-1]){                    //Check if the input number is higher than the number in the highest index
        printf("The new array is:\n");      //If yes append it directly to the end of the new one, after copied the original one
        for (int i = 0; i < dim-1; i++){
            newArr[i] = arr[i];
            printf("%i ",newArr[i]);
        }
        newArr[dim-1] = n;
        printf("%i", newArr[dim-1]);
    }else{                                  //Otherwise check the right positioning of the input number
        for (int i = 0; i < dim; i++){
            if (n < arr[i]){
                pos = i;
                break;
            }
        }

        for (int i = 0; i < pos; i++){      //copy lowers
            newArr[i] = arr[i];
        }

        for (int i = pos; i < dim; i ++){   //copy highers
            newArr[i+1]=arr[i];
        }

        newArr[pos] = n;                    //add to the output array the input number in the found position

        printf("The new array is:\n");
        for (int i= 0; i < dim; i++){
            printf("%i ", newArr[i]);
        }
    } 
}