#include<stdio.h>

// Local Variable
int addNumbers(int num1, int num2){
    int result = num1 + num2;
    // here variable result is local to this function
    printf("Result = %d\n",result);
}

int subtraction;
// here variable subtraction is global

int subNumbers(int num1, int num2){
    subtraction = num1 - num2;
    printf("Result = %d",subtraction);
}

int main(){

    addNumbers(5,6);
    subNumbers(9,5);

    return 0;
}