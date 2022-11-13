/*
int     (4 bytes) | %d for printing
double  (8 bytes) | %lf for printing
float   (4 bytes) | %f for printing
char    (1 bytes) | %c for printing
*/
#include<stdio.h>
int main(){
    //int
    int age = 10;
    printf("int size = %zu",sizeof(age)); //to find size of variable
    printf("\nAge: %d",age);

    //double
    double number = 12.45;
    printf("\ndouble size = %zu",sizeof(number));
    printf("\n%lf",number);
    printf("\n%.2lf",number);
    printf("\n%.1lf",number);

    //float
    float number1 = 10.9f;
    printf("\nfloat size = %zu",sizeof(number1));
    printf("\n%f",number1);
    printf("\n%.1f",number1);
    
    /* Tip: always use double instead of float */

    //exponention
    double number2 = 5.5e6;
    printf("\n%lf",number2);
    
    //char
    char character = 'z';
    printf("\nchar size = %zu",sizeof(character));
    printf("\n%c",character);
    printf(" : %d",character);

    return 0;
}
