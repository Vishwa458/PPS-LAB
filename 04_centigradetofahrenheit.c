//WAP to accepts the temperature in Centigrade and converts in to Fahrenheit.


#include<stdio.h>
int main()
{
    float centigrade=0.0,fahrenheit=0.0;        //declaration

    //raeding centigrade
    printf("Enter centigrade: ");               
    scanf("%f",&centigrade);

    fahrenheit=(9*centigrade)/5+32;             //converting to fahrenheit

    printf("Centigrade to fahrenheit is = %.2f",fahrenheit);    //printing fahrenhiet

    return 0;

}