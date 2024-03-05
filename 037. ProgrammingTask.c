#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int functions(){
    printf("\n******************Hello!*******************\n");
    printf("1. Positive/Negative\n");
    printf("2. Inside/Out\n");
    printf("3. Odd/Even\n");
    printf("4. Months\n");
    printf("5. Reverse Multiplication Table\n");
    printf("6. Sum of Odd Numbers from 1 to 100\n");
    printf("7. Prints only negative odd number\n");
    printf("8. Multiplication of two numbers\n");
    printf("9. Power of Square root of a number\n");
    printf("10. Find Factorial\n");
    printf("11. Find average marks\n");
    printf("12. Full Name\n");
    printf("13. Compare strings\n");
    printf("14. Salary\n");
    printf("15. Largest element of array\n");
    printf("16. Multiplication using pointer\n");
    printf("17. Complex number addition\n");
    printf("18. Print weekend days\n");
    printf("19. Dynamic array\n");
    printf("20. Write text\n");
    printf("21. Compute Square root\n");
    printf("22. Terminate\n");
}

int posNeg(){
    double number;
    
    printf("Enter a number: ");
    scanf("%lf",&number);

    if(number > 0)
        printf("The number is positive");
    else if(number < 0)
        printf("The number is negative");
    else
        printf("The number is zero");
}

int insideOut(){
    int a = 5;
    if(!(a%2==9))
        printf("\nInside if");
    else
        printf("\nInside else");
}

int oddEven(){
    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    (num%2==0) ? printf("The number is Even") : printf("The number is Odd");
}

int months(){

    int number;
    printf("\nEnter a number from 1 to 12: ");
    scanf("%d",&number);

    switch (number) 
    {
    case 1:
        printf("January");
        break;
    
    case 2:
        printf("February");
        break;
    
    case 3:
        printf("March");
        break;
    
    case 4:
        printf("April");
        break;
    
    case 5:
        printf("May");
        break;
    
    case 6:
        printf("June");
        break;
    
    case 7:
        printf("July");
        break;
    
    case 8:
        printf("August");
        break;
    
    case 9:
        printf("September");
        break;
    
    case 10:
        printf("October");
        break;
    
    case 11:
        printf("November");
        break;
    
    case 12:
        printf("December");
        break;

    default:
        printf("Invalid Number");
        break;
    }
}

int reverseTable(){

    int number;
    printf("\nEnter a number: ");
    scanf("%d",&number);

    int count = 10;
    while(count >= 1){
        int product = number * count;
        printf("%d * %d = %d\n",number,count,product);
        count = count - 1;
    }
}

int sumOfOdd(){
    int sum = 0;
    for(int i = 1; i <= 100; i = i + 2)
        sum = sum + i;
    printf("\n%d",sum);
}

int negativeOdd(){
    while (1)
    {
        int input;
        printf("Enter a number: ");
        scanf("%d",&input);
        if((input % 2 != 0) && (input < 0)){
            printf("%d\n",input);
        }
        else if(input > 0){
            printf("Positive Value\n");
            break;
        }
        else if((input < 0) && (input % 2 == 0)){
            printf("Negative Even\n");
            continue;
        }
        else{
            printf("A Zero!\n");
        }
    }
}

double mulFunc(){
    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf",&num1);
    printf("Enter second number: ");
    scanf("%lf",&num2);
    double mul = num1 * num2;
    printf("The multiplication of %lf and %lf is %.2lf\n",num1,num2,mul);
}

double powerOfRoot(){
    double num1;
    double num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    double squareRoot = sqrt(num1);

    printf("Enter second number: ");
    scanf("%lf",&num2);

    double power = pow(squareRoot,num2);
    printf("The power of square root of %lf is %lf",num1,power);
}

long int fact(int num){
    if(num >= 1)
        return num * fact(num - 1);
    else
        return 1;
}
int factorial(){
    int num;
    printf("Enter a positive number: ");
    scanf("%d",&num);
    long int factorial = fact(num); 
    printf("Factorial: %ld",factorial);
}

int average(){
    int marks[5];
    printf("Enter marks of 5 subjects: ");
    for(int i = 0; i < 5; ++i)
        scanf("%d",&marks[i]);
    
    int sum = 0;
    for(int i = 0; i < 5; ++i)
        sum = sum + marks[i];
    int average = sum/5;
    printf("Average Marks: %d",average);
}

int fullName(){
    char str[30];
    printf("Enter your full name: ");
    fflush(stdin);
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
    str[0] = 'X';
    printf("After change: ");
    printf("%s",str);
}

int largerString(){
    char str1[50];
    char str2[50];
    printf("\nEnter first string: ");
    fflush(stdin);
    fgets(str1, sizeof(str1), stdin);
    printf("\nEnter second string: ");
    fflush(stdin);
    fgets(str2, sizeof(str2), stdin);
    if(strlen(str1) > strlen(str2))
        printf("\nLarge string is: %s",str1);
    else
        printf("\nLarge string is: %s",str2);
}

double salary(){
    double salary;
    printf("Enter salary: ");
    scanf("%lf",&salary);

    double* ptr;
    ptr = &salary;
    printf("Salary: %lf",*ptr);

    double newSalary = salary * 2;
    printf("\nDouble salary: %lf",newSalary);
}

int largestElement(){
    int arr[5];
    printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; ++i)
        scanf("%d",&arr[i]);
    
    int largest = *arr; //it assign first element

    for(int i = 0; i < 5; ++i){
        if(largest < *(arr + i))
            largest = *(arr + i);
    }
    printf("The largest Element is: %d",largest);
}

int* ptrMul(int* num1, int* num2, int* mul){
    *mul = (*num1) * (*num2);
    return mul; //it returns address 
}
int ptrMultiplication(){
    int number1;
    int number2;
    printf("Enter first number: ");
    scanf("%d",&number1);
    printf("Enter second number: ");
    scanf("%d",&number2);
    int mul;
    int* product = ptrMul(&number1, &number2, &mul);
    printf("Multiplication is %d",*product);
}

int diffComplex(){
    typedef struct Complex
    {
        double real;
        double image;
    } complex;

    complex c1 = {.real = 201.87, .image = 130};
    complex c2 = {.real = 13.34, .image = 25.23};
    complex c3 = {.real = 11.14, .image = 20};

    complex sub;

    sub.real = c1.real - c2.real - c3.real;
    sub.image = c1.image - c2.image - c3.image;

    printf("\nResult is %.2lf - %.2lfi",sub.real, sub.image);
}

int weekends(){
    enum weekend{
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    } weekend1, weekend2;

    weekend1 = Sunday;
    weekend2 = Saturday;

    printf("Weekend 1 is %d\n",weekend1);
    printf("Weekend 2 is %d\n",weekend2);
}

int dynamicArray(){
    int n = 4;
    int* ages;

    ages = (int*) malloc(n * sizeof(int));

    printf("Enter age of 4 persons: ");
    for(int i = 0; i < n; ++i)
        scanf("%d",ages + i);
    
    printf("Entered elements are:\n");
    for(int i = 0; i < n; ++i)
        printf("%d ",*(ages + i));
    
    n = 6;

    ages = realloc(ages, n * sizeof(int));

    ages[4] = 32;
    ages[5] = 59;

    printf("\nAfter reallocation formed array:\n");
    for(int i = 0; i < n; ++i)
        printf("%d ",*(ages + i));
    
    free(ages);
}

int writeRead(){
    FILE* fptr;
    char content[1000];

    fptr = fopen("new.txt","w");

    fputs("C is a fun programming language.\n",fptr);
    fputs("And, I love using C language",fptr);

    fclose(fptr);

    fptr = fopen("new.txt","r");

    if (fptr != NULL){
        printf("File Open Successful.\n\n");
        while(fgets(content,1000,fptr)){
            printf("%s",content);
        }
    }
    else{
        printf("File Open Unsuccessful");
        return 0;
    }

    fclose(fptr);
}

int sqrtMacros(){
    double n;

    #define squareRoot(n)(sqrt(n))

    printf("Enter a number: ");
    scanf("%lf",&n);
    double sqrRoot = squareRoot(n);
    printf("%.2lf",sqrRoot);
}

int main(){

    while (1)
    {
        printf("\n");
        functions();
        printf("\nYour Selection: ");
        int number;
        scanf("%d",&number);
            switch (number)
            {
            case 1:
            	system("CLS");
                posNeg();
                break;
            
            case 2:
            	system("CLS");
                insideOut();
                break;
            
            case 3:
            	system("CLS");
                oddEven();
                break;

            case 4:
            	system("CLS");
                months();
                break;
            
            case 5:
            	system("CLS");
                reverseTable();
                break;

            case 6:
            	system("CLS");
                sumOfOdd();
                break;

            case 7:
            	system("CLS");
                negativeOdd();
                break;

            case 8:
                system("CLS");
                mulFunc();
                break;

            case 9:
                system("CLS");
                powerOfRoot();
                break;

            case 10:
                system("CLS");
                factorial();
                break;

            case 11:
                system("CLS");
                average();
                break;

            case 12:
                system("CLS");
                fullName();
                break;

            case 13:
                system("CLS");
                largerString();
                break;

            case 14:
                system("CLS");
                salary();
                break;

            case 15:
                system("CLS");
                largestElement();
                break;

            case 16:
                system("CLS");
                ptrMultiplication();
                break;

            case 17:
                system("CLS");
                diffComplex();
                break;

            case 18:
                system("CLS");
                weekends();
                break;
            
            case 19:
                system("CLS");
                dynamicArray();
                break;

            case 20:
                system("CLS");
                writeRead();
                break;
            
            case 21:
                system("CLS");
                sqrtMacros();
                break;

            case 22:
            	system("CLS");
                return 0;

            default:
                printf("Invalid Number");
                break;
            }
    }
    return 0;
}
