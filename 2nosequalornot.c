#include<stdio.h>
int main()
{
    double no1,no2;
    printf("Enter number 1: ");
    scanf("%lf",&no1);

    printf("Enter number 2: ");
    scanf("%lf",&no2);

    if(no1==no2)
        printf("Entered numbers %f and %f are equal: ",no1,no2);
    else
        printf("Entered numbers %f and %f are not equal: ",no1,no2);

    return 0;

}