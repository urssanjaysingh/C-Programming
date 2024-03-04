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
*/
#include<stdio.h>
int main(){
    char a = '5';
    int b = 9;
    int result = a + b;
    // here the char value will be convert into ascii value
    printf("%d",result);
    printf("\n");

    double c = 5.67;
    int result1 = b + c;
    /* here the int value will be convert into double value
        and the added, and then result is converted into integer
        Note: the data type at the left side of assignment op = 
                is always convers into data type at the left of =
    */
    printf("%d",result1);
    return 0;
}
