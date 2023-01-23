#include<stdio.h>
int main(){

    int weekDays();
    int weekendOrWeekday();
    int simpleCalculator();

    weekDays();
    weekendOrWeekday();
    simpleCalculator();

    return 0;
}

int weekDays(){

    int number;
    printf("Enter the number between 1 to 7: ");
    scanf("%d",&number);

    switch (number)
    {
    case 1:
        printf("Sunday ");
        break;

    case 2:
        printf("Monday ");
        break;
    
    case 3:
        printf("Tuesday ");
        break;

    case 4:
        printf("Wednesday ");
        break;
    
    case 5:
        printf("Thursday ");
        break;
    
    case 6:
        printf("Friday ");
        break;
    
    case 7:
        printf("Saturday ");
        break;

    default:
        printf("Invalid Number ");
        break;
    }

}

int weekendOrWeekday(){

    int number;
    printf("\nEnter a number between 1 to 7: ");
    scanf("%d",&number);

    switch (number)
    {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Weekday");
        break;
    
    case 1:
    case 7:
        printf("Weekend");
        break;

    default:
        printf("Invalid Number");
        break;
    }
}

int simpleCalculator(){

    char operator;
    printf("\nChoose an operator ['+', '-', '*', '/']: ");
    scanf("\n");
    scanf("%c",&operator);

    double num1, num2;

    printf("Enter first number: ");
    scanf("%lf",&num1);

    printf("Enter second number: ");
    scanf("%lf",&num2);

    double result;

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;
    
    case '*':
        result = num1 * num2;
        break;

    case '/':
        result = num1 / num2;
        break;

    default:
        break;
    }

    printf("%.2lf",result);
    
}
