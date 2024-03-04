// Data Types hierarchy
/*
    long double
    double 
    float
    long
    int 
    short
    char

    Note:The data type at lower level is 
                always converts into
            data type at higher higher level
            
    Note: the data type at the left side of assignment op = 
                is always convers into data type at the left of =
*/
#include<stdio.h>
int main(){
    double a = 5.67;
    int b = 9;
    double result = (int)a + b;
    //here the a is converted into integer explicitly
    printf("%lf",result);
    printf("\n");

    int x = 9;
    int y = 2;
    double result1 = x / y;
    printf("%lf",result1);
    printf("\n");
    double quotient = (double)x / y;
    printf("%.1lf",quotient);

    return 0;
}
