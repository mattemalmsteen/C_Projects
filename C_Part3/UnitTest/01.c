/*Exercice : Pick any function you want you coded and write a unit test of it ! 
For that : 
Création a function test_nameoftestedfunction
2. Create some date which will be used as an input
3. call you function with the inputs
4. Get the result and check that it matches an expected result
5. if not, print "bug in the function"
6. Try to run the tests and check that if the function is bugged, the test detects it ! */
#include <stdio.h>

float absolute_value(float number){
    

    if (number < 0){
        return number * -1;
        }
    else{
        return number;
    }
}

void test_absolute_value(){

    float test[9] = {1, -2, 3, -4, -5, 6, -7, -8, -9};
    float result[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 9; i++){
        if (absolute_value(test[i]) != result[i]){
            printf("Bug at index %i\n", i);
        }else{
            printf("Index %i ok\n", i);
        }
    }
    
}

int main(){
    test_absolute_value();
}