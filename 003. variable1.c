//You cannot create variable names with space in between
//You cannot start variable names with numbers.
//You cannot use certain words as variable names.

#include<stdio.h>
int main(){
    int firstNumber = 33;
    printf("firstNumber = %d",firstNumber);
    int secondNumber = firstNumber; //assining exist variable to new variable
    printf("\nsecondNumber = %d",secondNumber);
    return 0;
}
