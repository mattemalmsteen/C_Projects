/*
Code a function named absolute_value which returns the absolute value of a number. It must have the following prototype: 
float absolute_value(float number)  

For example:
absolute_value(-3) must return 3
and absolute_value(2) must return 2

Attention no main function needed!
*/


float absolute_value(float number){
    

    if (number < 0){
        return number * -1;
        }
    else{
        return number;
    }
}