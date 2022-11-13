#include<stdio.h>

int declaration(){
    int arr[2][3] = {{1, 3, 5}, {2, 4, 6}};
    
    printf("%d\n",arr[0][0]);
    printf("%d\n",arr[1][2]);
}

int change(){
    int arr[2][3] = {{1, 3, 5}, {2, 4, 6}};

    arr[0][2] = 7;
    arr[1][1] = 8;
    printf("%d\n",arr[0][2]);
    printf("%d\n",arr[1][1]);
}

int loop(){
    int arr[2][3] = {{1, 3, 5}, {2, 4, 6}};

    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 3; ++j){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    
    declaration();
    change();
    loop();

    return 0;
}