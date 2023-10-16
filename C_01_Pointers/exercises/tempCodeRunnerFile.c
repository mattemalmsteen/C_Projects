
void displayArray(int *arr, int size){
    for (int i = 0; i < size; i++){
        printf("%i ", *(arr + i));
    }
    return;
}

void largestEl(int *arr, int size){
    int pos = 0;
    for (int i = 1; i < size; i++){
        if (arr[i] > arr[pos]){
            pos = i;
        }
    }
    printf("The largest elemnt is: %d\n", arr[pos]);
}

void reverse(int *arr, int size){
    int *start = arr;
    int *end = arr + size - 1;

    while(start<end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }   
}

void sum(int *arr, int size){
    int s = 0;
    for (int i = 0; i < size; i++){
        s = s + *(arr + i);
    }
    printf("%d", s);
}

void swap(int *arr, int pos1, int pos2){
    int temp;
    temp = arr[pos1];
    arr[pos1]= arr[pos2];
    arr[pos2] = temp;
    return;
}

