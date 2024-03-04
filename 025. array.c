#include<stdio.h>
int main(){
    int declarationAssign();
    int indexAssign();
    int userIndexAssign();
    int changeValue();
    int loopArray();

    declarationAssign();
    indexAssign();
    userIndexAssign();
    changeValue();
    loopArray();

    return 0;
}

int declarationAssign(){
    int age[5] = {21, 29, 25, 32, 17};
    printf("%d ",age[0]);
    printf("%d ",age[1]);
    printf("%d ",age[2]);
    printf("%d ",age[3]);
    printf("%d ",age[4]);
}

int indexAssign(){
    int age[5];
    age[0] = 21;
    age[1] = 29;
    age[2] = 25;
    age[3] = 32;
    age[4] = 17;
    printf("\n");
    printf("%d ",age[0]);
    printf("%d ",age[1]);
    printf("%d ",age[2]);
    printf("%d ",age[3]);
    printf("%d ",age[4]);
}

int userIndexAssign(){
    int age[5];
    printf("\nEnter 5 values: ");
    scanf("%d",&age[0]);
    scanf("%d",&age[1]);
    scanf("%d",&age[2]);
    scanf("%d",&age[3]);
    scanf("%d",&age[4]);

    printf("%d ",age[0]);
    printf("%d ",age[1]);
    printf("%d ",age[2]);
    printf("%d ",age[3]);
    printf("%d ",age[4]);
}

int changeValue(){
    int age[5] = {21, 29, 25, 32, 17};
    age[2] = 26;
    printf("\n%d",age[2]);
}

int loopArray(){
    int age[5];
    printf("\nEnter 5 values: ");
    for(int i = 0; i < 5; ++i)
        scanf("%d",&age[i]);
    for(int i = 0; i < 5; ++i)
        printf("%d ",age[i]);
}
