#include<stdio.h>
/* Prototype: 
    In case we are calling the function before
        defining the function, the function prototype, 
            provides information to the compiler
                about the function
*/
int addNumbers(int number1, int number2);

int main(){

    int result = addNumbers(8,9);
    printf("Result = %d\n",result);

    return 0;
}

int addNumbers(int number1, int number2){

    int sum = number1 + number2;
    return sum;
}
