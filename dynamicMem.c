#include<stdio.h>
#include<stdlib.h>

int allocate(){
    int n = 4;
    int* ptr;

    ptr = (int*) malloc(n * sizeof(int));
    /*
        we use typecasting so the allocated memory 
            can used to store integer type data
    */

    if(ptr == NULL){
        printf("Memory can't be allocated");
        return 0;
    }
        
    printf("Enter input values:\n");
    for(int i = 0; i < n; ++i)
        scanf("%d",ptr + i);
    
    for(int i = 0; i < n; ++i)
        printf("%d ",*(ptr + i));

    free(ptr);
}

int reAllocate(){
    printf("\n\nRe-Allocation:");
    int n = 4;
    int* ptr;

    ptr = (int*) malloc(n * sizeof(int));

    if(ptr == NULL){
        printf("Memory can't be allocated");
        return 0;
    }

    printf("\nAllocated Memory\n");
    for(int i =0; i < n; ++i)
        printf("%p\n",ptr + i);
    
    n = 6;

    ptr = realloc(ptr, n * sizeof(int));

    printf("Newly Allocated Memory\n");
    for(int i = 0; i < n; ++i)
        printf("%p\n",ptr - i);

    free(ptr);
}

int main(){

    allocate();
    reAllocate();

    return 0;
}
