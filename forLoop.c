#include<stdio.h>
int main(){
    
    int count();
    int sum();
    int sumOfEven();

    count();
    sum();
    sumOfEven();

    return 0;
}

int count(){
    for(int i = 0; i < 10; i++)
        printf("%d ",i);
}

int sum(){
    int sum = 0;
    for(int i = 1; i <= 100; i++)
        sum = sum + i;
    printf("\n%d",sum);
}

int sumOfEven(){
    int sum = 0;
    for(int i = 2; i <= 100; i = i + 2)
        sum = sum + i;
    printf("\n%d",sum);
}
