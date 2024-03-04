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
    while (count < 5)
    {
        printf("Count = %d\n",count);
        printf("whie loop in c\n");
        count = count + 1;
    }
}

int mulTable(){
    int number;
    printf("\nEnter the number: ");
    scanf("%d",&number);

    int count = 1;
    while(count <= 10){
        int product = number * count;
        printf("%d * %d = %d\n",number,count,product);
        count = count + 1;
    }
}

