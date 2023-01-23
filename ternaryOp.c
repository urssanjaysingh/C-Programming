/*
    Syntax:
            test_condition ? expression1 : expression2;
*/
#include<stdio.h>
int main(){

    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    (age >= 18) ? printf("You can vote") : printf("You can't vote");

    // assigning value in a variable
    char operator = '+';
    int num1 = 8;
    int num2 = 7;
    int result = (operator == '+') ? (num1 + num2) : (num1 - num2);
    printf("\n%d",result);

    // ternary operator vs if...else statement


    return 0;
}

