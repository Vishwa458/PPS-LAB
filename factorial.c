#include<stdio.h>
int main()
{
    int i,fact=1,num;
    printf("enter the number to find the factorial: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is %d",num,fact);
}