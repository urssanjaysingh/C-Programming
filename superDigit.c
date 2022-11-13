#include<stdio.h>
#include<stdlib.h>
#include<string.h>

long int digSum(long int n)
{
    if(n == 0)
    {
        return 0;
    }
    return (n%9==0) ? 9 : (n%9);
}

long int repeatedNumberSum(char* s, int x)
{
    long int sum = x * digSum(atoi(s));
    return digSum(sum);
}

int main()
{
    char* s;
    s = (char*)malloc(30*sizeof(char));
    printf("Enter the Number: ");
    fgets(s,30,stdin);
    int x = strlen(s) - 1;
    printf("%d",repeatedNumberSum(s,x));
    return 0;
}
