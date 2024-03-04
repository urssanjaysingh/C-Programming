/*
    &&      Logical AND
    ||      Logical OR
    !       Logical NOT
*/
#include<stdio.h>
#include<stdbool.h>
int main(){

    int age = 18;
    double height = 6.3;

    bool result = (age >= 18) && (height > 6.0);
    printf("%d ",result);

    bool result1 = (age >= 18) && (height < 6.0);
    printf("%d ",result1);

    bool result2 = (age >= 18) || (height > 6.0);
    printf("%d ",result2);

    bool result3 = !(age >= 18);
    printf("%d ",result3);
    
    return 0;
}
