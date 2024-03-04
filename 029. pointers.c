#include<stdio.h>

/*
    declaration:
                int* ptr;   (pointer variable)
            here ptr can only store the memory address
                int number;  (normal variable)
        pointer variable ptr stores the address of another variable
            ptr = &number;   (valid)
            ptr = number;    (invalid)
    *ptr used to assign and access the value of that variable
        *ptr = number;   (valid)
        *ptr = &number;  (invalid)
tip: always use int* ptr instead of int *ptr
*/

int address(){
    int age = 25;
    printf("%p",&age);

    int* ptr = &age;
    printf("\n%p",ptr);
}

int accessValue(){
    int age = 25;
    int* ptr = &age;

    printf("\nAddress: %p",ptr);
    printf("\nValue: %d",*ptr);
}

int change(){
    int age = 25;
    int* ptr = &age;

    *ptr = 31;
    printf("\n%d",age);
}

int main(){
    
    address();
    accessValue();
    change();

    return 0;
}
