#include<stdio.h>

/*
    A string is an array of character.
    Every string in C is teminated by a null character - '\0'
    '\0' helps the compiler to identify the end of a string
    Hence, Actual size of a string is greater than 
        total no. of elements in a string
*/
int declaration(){
    char str[] = "Programiz";
    printf("%s",str);
}

/* 
        Note: we don't need to use & with an string-array
            scanf only takes string until a white space is encountered
        This is because scanf treats space as '\0' the end of the string
    */
int userInput(){
    char str[20];
    printf("\nEnter your name: ");
    scanf("%s",str);
    fflush(stdin);
    
    /* we use fflush(stdin) function
        to flush or clear the output buffer of the stream
        when it is used after the scanf, it flushes the input buffer
    */

    printf("%s",str);
}

/* fgets takes entire line of strings */
int fullName(){
    char str[20];
    printf("\nEnter your full name: ");
    fflush(stdin);
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
}

int accessCharacters(){
    char str[] = "Programiz";
    printf("%c\n",str[0]);
    printf("%c\n",str[1]);
    printf("%c\n",str[2]);
    printf("%c\n",str[3]);
    printf("%c\n",str[4]);
}

int change(){
    char str[] = "Programiz";
    str[2] = 'O';
    str[4] = 'R';
    printf("%s",str);
}

int main(){
    
    declaration();
    userInput();
    fullName();
    accessCharacters();
    change();

    return 0;
}
