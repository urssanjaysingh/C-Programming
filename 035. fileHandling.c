#include<stdio.h>
#include<stdlib.h>
/*
    to work with file we use FILE* fptr; 
*/

int readMode(){
    FILE* fptr;

    fptr = fopen("test.txt","r");
/*
    Note: first you need to create test.txt manually for read mode
            in same directory where this program will reside
*/
    char content[1000];

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

int writeMode(){
    FILE* fptr;

    fptr = fopen("test1.txt","w");
/*
    Note: first you dont't need to create test1.txt manually 
    for write mode it will be created automatically
        in same directory where this program will reside
*/    
    fputs("I Love C Programming\n",fptr);
    fputs("C programming series by Programiz is the best",fptr);

    fclose(fptr);
}

int main(){

    readMode();
    writeMode();

    return 0;
}
