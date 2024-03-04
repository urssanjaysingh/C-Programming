#include<stdio.h>
/*
    Enumerations:
    An enum is a type that has a fixed set of values,
        In C all enum constant are internally represented
    as fixed integer values known as integral constant
*/
enum Size{
    Small,
    Medium,
    Large,
    ExtraLarge
};
/*
    Here integral constant represented as:
        Small = 0
        Medium = 1
        Large = 2
        ExtraLarge = 3
*/

int main(){

    enum Size shoeSize1; 
    /*
        here shoeSize1 is a variable of enum type
            it can now store one of the 4 values
                present in enum Size
    */
   enum Size shoeSize2;
   enum Size shoeSize3;
   enum Size shoeSize4;

    shoeSize1 = Small;
    printf("Small = %d\n",shoeSize1);
    shoeSize2 = Medium;
    printf("Medium = %d\n",shoeSize2);
    shoeSize3 = Large;
    printf("Large = %d\n",shoeSize3);
    shoeSize4 = ExtraLarge;
    printf("Extra Large = %d\n",shoeSize4);

    printf("\n");

//Changing values of integral constants
enum Size1 {
    Small1 = 27,
    Medium1 = 31,
    Large1 = 35,
    ExtraLarge1 = 40
};

    enum Size1 shoeSize5 = Small1;
    enum Size1 shoeSize6 = Medium1;
    enum Size1 shoeSize7 = Large1;
    enum Size1 shoeSize8 = ExtraLarge1;

    printf("Small 1 = %d\n",shoeSize5);
    printf("Medium 1 = %d\n",shoeSize6);
    printf("Large 1 = %d\n",shoeSize7);
    printf("Extra Large 1 = %d\n",shoeSize8);

    printf("\n");

    //declaring variable while defining enum
    enum Size2 {
        Small2 = 26,
        Medium2 = 30,
        Large2 = 36,
        ExtraLarge2 = 41
    } shoeSize9, shoeSize10, shoeSize11, shoeSize12;

    shoeSize10 = Small2;
    shoeSize9 = Medium2;
    shoeSize11 = Large2;
    shoeSize12= ExtraLarge2;

    printf("Small 2 = %d\n",shoeSize9);
    printf("Medium 2 = %d\n",shoeSize10);
    printf("Large 2 = %d\n",shoeSize11);
    printf("Extra Large 2 = %d\n",shoeSize12);

    return 0;
}
