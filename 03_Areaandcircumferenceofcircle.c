//WAP to calculate area and circumference of a circle.


#include<stdio.h>
int main(){

    float pi=3.14,r=0.0,area=0.0,circumference=0.0;     //declaration

    //reading radiuos
    printf("Enter radius: ");                           //
    scanf("%f",&r);
    
    area=pi*r*r;                        //calculating area
    circumference=2*pi*r;               //calculating circumferenece

    printf("Area = %.2f",area);                         //printing area
    printf("\nCircumferenec = %.2f",circumference);     //printing circumferenece

    return 0;
}