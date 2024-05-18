//program to check whether entered number is a prime or not
#include<stdio.h>
int main()
{
    int n,i,flag=1;
    printf("enter the number to check: ");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
        flag=0;
        break;
        }
    }
    if(flag==1)
    printf("number is prime: ");
    else
    printf("number is not prime: ");
    return 0;
}