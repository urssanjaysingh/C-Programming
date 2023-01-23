#include<stdio.h>
int main(){

    int age;

    printf("Enter your age: ");
    scanf("%d",&age);

    if(age > 120 || age < 0)
        printf("Invalid Age");
    else if(age >= 18)
        printf("You are eligible to vote");
    else
        printf("Sorry, you are not eligible to vote");
    
    return 0;
}
