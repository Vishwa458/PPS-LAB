//program to check whether entered number is a prime or not
#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter the number to check: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==0)
    printf("number is prime: ");
    else
    printf("number is not prime: ");
    return 0;
}