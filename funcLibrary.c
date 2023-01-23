#include<stdio.h>
#include<math.h>
/* sqrt(), cbrt(), pow() */
#include<ctype.h>
/* toupper(), tolower() */
int main(){
    
    float result = sqrt(25);
    printf("Square root is %.2f\n",result);

    double cuberoot = cbrt(27);
    printf("Cube root is %.2lf\n",cuberoot);

    int a = 5;
    int b = 2;
    double power = pow(a,b);
    printf("Power: %.2lf\n",power);

    char alpha = 'e';
    char upper = toupper(alpha);
    printf("%c\n",upper);

    char alpha1 = 'S';
    char lower = tolower(alpha1);
    printf("%c",lower);

    return 0;
}
