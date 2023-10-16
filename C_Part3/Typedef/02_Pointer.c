/*
Keep the same struct Point as before. 
1. Create a point p1 without specifying its member values
2. Create a Point* point_pointer and affect its value to the address of p1 with the & symbol
3. Set the members of p1 through the point_pointer variable
4. Display the members of p1 and point_pointer and check the values are the same
*/

typedef struct Point{
    float x;
    float y;
} Point;


int main(void){
    
    Point p1;

    Point *point_pointer = &p1;
    point_pointer->x = 3.14;
    point_pointer->y = 2.55;


    printf("X value is %f\n", point_pointer->x);    
    printf("Y value is %f\n", point_pointer->y);
}