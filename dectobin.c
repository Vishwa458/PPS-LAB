#include<stdio.h>
int main()
{
    int b,d,rem=0,sum=0,i=1;
    printf("enter the decimal number: ");
    scanf("%d",&d);
    while(d>0)
    {
        rem=d%2;
        d=d/2;
        sum=sum+i*rem;
        i=i*10;
    }
    printf("number is %d",sum);
}