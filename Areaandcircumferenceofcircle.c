//Write a program to calculate area and circumference.
#include<stdio.h>
int main(){
    float pi=3.14,r=0.0,area=0.0,circumference=0.0;
    printf("Enter radius: ");
    scanf("%f",&r);
    area=pi*r*r;
    circumference=2*pi*r;

    printf("Area = %.2f",area);
    printf("\nCircumferenec = %.2f",circumference);

    return 0;
}