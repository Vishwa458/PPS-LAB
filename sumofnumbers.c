//program to print sum of all the numbers upto a given number
#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("enter the number: ");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
       sum=sum+i;
    }
    printf("sum of all the numbers upto a given number is = %d",sum);
}