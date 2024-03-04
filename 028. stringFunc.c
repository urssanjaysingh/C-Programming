#include<stdio.h>
#include<string.h>
/* strlen(), strcpy(), strcat(), strcmp() */

int len(){
    char language[] = "C Programming";

    printf("%s",language);

    printf("\nLength: %zu",strlen(language));
    // %zu is format specifier for return value of strlen()
}

int copy(){
    char food[] = "Pizza";
    char bestFood[strlen(food)];
    strcpy(bestFood, food);
    printf("\n%s",bestFood);
}

int concatenate(){
    char text1[] = "Hey, ";
    char text2[] = "How are you?";
    strcat(text1,text2);
    printf("\n%s",text1);
}

int compare(){
    char text1[] = "abcd";
    char text2[] = "abcd";
    char text3[] = "efgh";
    int result1 = strcmp(text1,text2);
    int result2 = strcmp(text1,text3);
    printf("\n%d: same",result1);
    printf("\n%d: not same",result2);
}

int main(){
    
    len();
    copy();
    concatenate();
    compare();

    return 0;
}
