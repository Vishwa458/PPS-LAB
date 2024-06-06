#include<stdio.h>
#include<math.h>
int main()
{
    int rem=0,n=0,sum=0,num=0;
    printf("enter the binary number: ");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        sum=sum+rem*pow(2,n);
        n++;
    }
    printf("number is %d",sum);
    return 0;
}