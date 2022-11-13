#include<stdio.h>
int main(){
    //int value
    int age;
    printf("Enter int input: ");
    scanf("%d",&age); //taking input from user and storing in age variable
    printf("Age = %d",age); //printing value stored in age variable

    //double value
    double number;
    printf("\nEnter double input: ");
    scanf("%lf",&number);
    printf("Number: %lf",number);

    //character value
    char alphabet = 'A';
    printf("\nEnter character input: ");
    //we can also use scanf("\n"); here instead of "\n" in next scanf
    scanf("\n%c",&alphabet); 
    printf("Character: %c",alphabet);
    /* Tip: we can take multiple input of different type as:
        scanf("%lf %c",&number,&alphabet);
        */
    return 0;
}


