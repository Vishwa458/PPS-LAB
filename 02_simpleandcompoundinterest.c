/*WAP that calculates Simple Interest and compound interest.
The principle amount, rate, of interest, time are entered through the keyboard*/

#include<stdio.h>
#include<math.h>
int main()
{
    float n,si,ci,principle,rate,time;          // Declaration


    //Reading principle,rate and time
    printf("Enter the principle amount,rate of interest,time(interms of years):  "); 
    scanf("%f %f %f",&principle,&rate,&time);
    si=(principle*rate*time)/100;              //calculating Simpple interest 
    n=1+rate/100;               
    ci=(principle*(pow(n,time)))-principle;    //calculating compound interest 
    printf("Simple interest: %.2f ",si);       //printing simple interest 
    printf("Compound interest: %.2f",ci);      //printing compound interest
    return 0;

}