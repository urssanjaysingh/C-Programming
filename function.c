#include<stdio.h>
// Tip: Use descriptive names for functions
void greet(){
    printf("Good Morning\n");
}

void calculateSquare(int number){
    int square = number * number;
    printf("Square of %d is %d\n",number,square);
}

void addNumber(int num1, int num2){
    int sum = num1 + num2;
    printf("Sum of %d and %d is %d\n",num1,num2,sum);
}

// Return Type
int subNumber(int num1, int num2){
    int sub = num1 - num2;
    return sub;
}

// Tip: Use main() function at the below of other functions
int main(){

    greet();
    calculateSquare(5);
    addNumber(8,9);
    int subtraction = subNumber(9,5);
    printf("Result = %d",subtraction);

    return 0;
}


