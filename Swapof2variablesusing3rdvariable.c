//Write a program that swaps values of two variables using third variable.
#include<stdio.h>
int main()
{
    int var1=0,var2=0,var3=0;
    printf("Enter two varibales values in integer:\n ");
    printf("var1 = "); 
    scanf("%d",&var1);
    printf("var2 = ");
    scanf("%d",&var2);
    
    var3=var1;
    var1=var2;
    var2=var3;
    printf("After swapping two variables: \n var1=%d \n var2=%d",var1,var2);
    return 0;
}