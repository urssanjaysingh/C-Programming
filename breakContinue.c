#include<stdio.h>
int main(){

    int breakStatement();
    int breakWithIf();
    int breakWithWhile();
    int continueStatement();
    int breakWithContinue();

    breakStatement();
    breakWithIf();
    breakWithWhile();
    continueStatement();
    breakWithContinue();
    return 0;
}

int breakStatement(){
    for(int i = 1; i <= 5; i++){
        printf("%d\n",i);
        break; //imediately terminates the loop
        printf("After the Break");
    }
}

int breakWithIf(){
    for(int i = 1; i <= 5; i++){
        if(i == 3){
            break;
        }
        printf("%d ",i);
    }
}

int breakWithWhile(){
    while (1)
    {
        int number;
        printf("\nEnter a number: ");
        scanf("%d",&number);
        if(number < 0){
            break;
        }
        printf("%d\n",number);
        printf("Enter negative number to terminate!");
    }
}

int continueStatement(){
    for(int i = 1; i <= 5; i++){
        if(i == 3){
            continue; //skips the current iteration
        }
        printf("%d ",i);
    }
}

int breakWithContinue(){
    while (1)
    {
        int number;
        printf("\nEnter a number: ");
        scanf("%d",&number);
        if(number < 0){
            break;
        }
        if((number % 2) != 0){
            printf("Skiped!");
            continue;
        }
        printf("%d\n",number);
        printf("Enter negative number to terminate!");
    }
}
