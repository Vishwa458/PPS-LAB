//program to print sum of all the digits of a given number
#include<stdio.h>
int main()
{
    int num,sum,rem;
    printf("enter a number to find the sum of its digits: ");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("Sum of digits is %d ",sum);
    return 0;
}