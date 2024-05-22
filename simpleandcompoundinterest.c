#include<stdio.h>
#include<math.h>
int main()
{
    float n,si,ci,principle,rate,time;
    printf("Enter the principle amount,rate of interest,time(interms of years):  ");
    scanf("%f %f %f",&principle,&rate,&time);
    si=(principle*rate*time)/100;
    n=1+rate/100;
    ci=(principle*(pow(n,time)))-principle;
    printf("Simple interest: %.2f ",si);
    printf("Compound interest: %.2f",ci);
    return 0;




}