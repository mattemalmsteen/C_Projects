/*    Using #define create a constant nameed PI which equals 3.1415
    Create a variable v1 which equals PI
    using gcc -E check that the constant is replaced before compilation*/

    #include <stdio.h>
    #define PI 3.1415

    int main(){
        float v1 = PI;
    }