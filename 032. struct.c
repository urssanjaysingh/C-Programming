#include<stdio.h>
int main(){

    struct Person
    {
        double salary;
        int age;
    };
    
    //struct variables
    struct Person person1;
    struct Person person2;
    
    //member variables
    person1.age = 25;
    person1.salary = 44321.78;

    person2.age = 31;
    person2.salary = 78943.2;
    
    printf("Age of person1: %d",person1.age);
    printf("\nSalary of person1: %.2lf",person1.salary);

    printf("\nAge of person2: %d",person2.age);
    printf("\nSalary of person2: %.2lf",person2.salary);
    
    printf("\n");

    struct Person1
    {
        double salary;
        int age;
    };

    //struct and member variables in one line
    struct Person1 person3 = {.age = 26, .salary = 43211};
    struct Person1 person4 = {.age = 32, .salary = 79000};

    printf("\nAge of person3: %d",person3.age);
    printf("\nSalary of person3: %.2lf",person3.salary);

    printf("\nAge of person4: %d",person4.age);
    printf("\nSalary of person4: %.2lf",person4.salary);

    printf("\n");

    struct Person2
    {
        double salary;
        int age;
    } person5; //creating struct variable while defining struct

    person5.age = 30;
    person5.salary = 80000;

    printf("\nAge of person5: %d",person5.age);
    printf("\nSalary of person5: %.2lf",person5.salary);

    printf("\n");

    typedef struct Person3
    {
        double salary;
        int age;
    } person; //this person can be use as a alias of struct
    
    person person6; //note the alias

    person6.age = 28;
    person6.salary = 75000;

    printf("\nAge of person6: %d",person6.age);
    printf("\nSalary of person6: %.2lf",person6.salary);

    printf("\n");

    typedef struct Complex
    {
        double real;
        double image;
    } complex;

    //assigning values while declaring member variables
    complex c1 = {.real = 21.87, .image = 30};
    complex c2 = {.real = 13.34, .image = 112.23};

    //creating a new member variable
    complex sum;

    sum.real = c1.real + c2.real;
    sum.image = c1.image + c2.image;

    printf("\nResult is %.2lf + %.2lfi",sum.real, sum.image);

    printf("\n");
    
    return 0;
}

