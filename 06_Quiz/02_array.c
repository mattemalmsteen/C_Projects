/*

write a program that calculates and displays the following information for a given array tab containing the grades of 8 students:

    The maximum grade (max)
    The minimum grade (min)
    The class average grade (average)

Note: The grades are of type float.
*/


#include <stdio.h>
int main(){
    
    float grades [] = {1.5, 2, 7, 5.5, 9, 3, 4, 5.5};
    int size = sizeof(grades) / sizeof(grades[0]);
    int max = 0;
    int min = 0;
    float sum = 0;
    
        for (int i = 1; i < size; i++){
        if (grades[i] > grades[max]){
            max = i;
        }
    }
    printf("The maximum grade in the class is: %g\n", grades[max]);
    
    for (int i = 1; i < size; i++){
        if (grades[i] < grades[min]){
            min = i;
        }
    }
    printf("The minimum grade in the class is: %g\n", grades [min]);
    
    for (int i = 0; i < size; i++){
        sum = sum + grades[i];
    }
    printf ("The avarage grade of the class is: %g\n", sum / size);
}



