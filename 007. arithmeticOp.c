// Arithmetic operators
/*  
    Addition        +
    Subtraction     -
    Multiplication  *
    Division        /
    Remainder       %
    Increment       ++
    Decrement       --
*/
#include<stdio.h>
int main(){
    int x = 12;
    int res = x + 8;
    printf("%d",res);
    printf("\n");

    printf("%d",x+8);
    printf("\n");

    double y = 12.57;
    double result = x + 8.67;
    printf("%.2lf",result);
    printf("\n");

    double addition = x + y;
    printf("%.2lf",addition);
    printf("\n");

    double subtraction = y - x;
    printf("%.2lf",subtraction);
    printf("\n");

    int division = y / x;
    printf("%d",division);
    printf("\n");

    double division1 = y / x;
    printf("%.2lf",division1);
    printf("\n");

    int remainder = x % 8;
    printf("%d",remainder);
    printf("\n");

    // tip: raminder % operator always works with integers and %d
    
    printf("%d",++x);
    printf("\n");
    printf("%d",--x);
    printf("\n");

    //multiple operator
    int z = (4 / 2) + (6 * 5) - 1;
    printf("%d",z);

    return 0;
}
