#include <stdio.h>
int recursiveSequentialSearch(int tab[], int x, int a, int length);

int main(){
    int arr[] = {1, 5, 6, 7, 3, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int search = 8;
    int ind = 0;

    ind = recursiveSequentialSearch(arr, search, ind, size);
    printf("%i", ind);
}


int recursiveSequentialSearch (int tab[], int x, int a, int length){
    if (a == length){
        return -1;
    }else if (tab[a] == x){
        return a;
    }else{
        recursiveSequentialSearch(tab, x, a + 1, length);
    }
}