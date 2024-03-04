/*
    #  represents a preprocessor directive
        a preprocessor pre-process our program before
        it is being compiled
    #include is a preprocessor directive that include 
        header files in our program
    #define preprocessor is used to define macros
        macros is a piece of code which is given a name
*/
#include<stdio.h>

#define PI 3.1415
#define circleArea(r)(PI * r * r)

int main(){

    double radius = 12.4;

    double area = circleArea(radius);

    printf("%.2lf",area);

    return 0;
}
