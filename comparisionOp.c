/*
    >       Greater than
    <       Less than
    ==      Equal to
    >=      Greater than or equal to
    <=      Less than or equal to
    !=      Not equal to
    Note: these all return boolean values i.e. 1 or 0
*/
#include<stdio.h>
#include<stdbool.h>
int main(){

    bool value = (12 > 9);
    printf("%d ",value);

    bool value1 = (12 < 9);
    printf("%d ",value1);

    bool value2 = (9 == 9);
    printf("%d ",value2);

    bool value3 = (9 != 9);
    printf("%d ",value3);

    bool value4 = (9 >= 6);
    printf("%d ",value4);

    bool value5 = (9 <= 6);
    printf("%d ",value5);

    //floating values
    bool value6 = (9.34 >= 6.87);
    printf("%d ",value6);

    // comparing variable
    int num1 = 9;
    int num2 = 6;
    bool value7 = num1 < num2;
    printf("%d ",value7);

    int num3 = 10;
    bool value8 = num3 > 6;
    printf("%d ",value8);

    return 0;
}