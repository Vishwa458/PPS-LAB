//Write a program to accepts the temperature in Centigrade and converts in to Fahrenheit.
#include<stdio.h>
int main()
{
    float centigrade=0.0,fahrenheit=0.0;
    printf("Enter centigrade: ");
    scanf("%f",&centigrade);

    fahrenheit=(9*centigrade)/5+32;

    printf("Centigrade to fahrenheit is = %.2f",fahrenheit);

    return 0;

}