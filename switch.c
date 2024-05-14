#include<stdio.h>
int main()
{
    int no1,res,no2;
    char op;
    printf("enter operator: + - * / ");
    scanf("%c",&op);
    printf("enter 2 numbers: ");
    scanf("%d %d",&no1,&no2);

    switch(op)
    {
        case '+': res=no1+no2;
                printf("sum is: %d",res);
                break;
        case '-': printf("sum is: %d",no1-no2);
                break;
        case '*': printf("sum is: %d",no1*no2);
                break;
        case '/': printf("sum is: %d",no1/no2);
                break;
        case '%': printf("sum is: %d",no1%no2);
                break;
        //case '+': printf("sum is: %d",no1+no2);
               // break;
        default:printf("please enter the correct operation");
               break;

    }

}