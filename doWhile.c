#include<stdio.h>
int main(){

    int countTo5();
    int mulTable();

    countTo5();
    mulTable();
    
    return 0;
}

int countTo5(){
    int count = 1;
    do
    {
        printf("%d\n",count);
        count = count + 1;
    } while (count < 5);
}

int mulTable(){

    int number;
    printf("\nEnter a number: ");
    scanf("%d",&number);

    int count = 1;
    do
    {
        int product = number * count;
        printf("%d * %d = %d\n",number,count,product);
        count = count + 1;
    } while (count <= 10);
    
}

