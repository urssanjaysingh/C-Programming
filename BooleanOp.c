// Note: include<stdbool.h> for boolean operators
#include<stdio.h>
#include<stdbool.h>
int main(){
    bool value1 = true;
    bool value2 = false;
    /* There is no format specifier for boolean data types
        we can use %d as these data type represent as integer data
            true = 1 and false = 0
    */
    printf("%d ",value1);
    printf("%d ",value2);

    return 0;
}
