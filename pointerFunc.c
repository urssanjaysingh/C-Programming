#include<stdio.h>

void findValue(int* num){
    *num = 39;
}

void findSquare(int* num){
    int square = (*num) * (*num);
    *num = square;

}

// Return pointers from a function
int* findSquare1(int* num){
    int square = (*num) * (*num);
    *num = square;

    return num; //it returns the address
}

int* addNumbers(int* num1, int* num2, int* sum){
    *sum = (*num1) + (*num2);
    return sum;
}

int main(){
    int number = 21;
    findValue(&number);
    printf("Number is %d",number);

    int num = 21;
    findSquare(&num);
    printf("\nSquare is %d",num);

    int num1 = 21;
    int* result = findSquare1(&num1);
    printf("\nResult is %d",*result);

    int number1 = 32;
    int number2 = 18;
    int sum;
    int* addition = addNumbers(&number1, &number2, &sum);
    printf("\nSum is %d",*addition);

    return 0;
}
