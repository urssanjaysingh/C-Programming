#include<stdio.h>

int address(){
    int numbers[5] = {1, 3, 5, 7, 9};
    for(int i = 0; i < 5; ++i)
        printf("%d = %p\n",numbers[i], &numbers[i]);
    /*
        Note:numbers without '&' only points 
        to the adress of first element of numbers[5]-array
    */
    printf("Array address of 1: %p\n",numbers);
    printf("Array address of 3: %p\n",numbers + 1);
    printf("Array address of 5: %p\n",numbers + 2);
    printf("Array address of 7: %p\n",numbers + 3);
    printf("Array address of 9: %p\n",numbers + 4);

    for(int i = 0; i < 5; ++i)
        printf("%d = %p\n",numbers[i], numbers + i);
}

int access(){
    int numbers[5] = {1, 3, 5, 7, 9};
    for(int i = 0; i < 5; ++i)
        printf("Address of %d = %p\n",*(numbers + i), numbers + i);
}

int change(){
    int numbers[5] = {1, 3, 5, 7, 9};
    
    *numbers = 2;
    *(numbers + 4) = 11;

    printf("First Element: %d\n",*numbers);
    printf("Last Element: %d",*(numbers + 4));
}

int main(){
    
    address();
    access();
    change();

    return 0;
}