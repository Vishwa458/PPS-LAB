//program to print all the armstrong numbers opto 1000
#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    for(i=0;i<=1000;i++)
    {
        int num=i,dig=0;
        while(num>0)
        {
            num=num/10;
            dig++;
        }
        num=i;
        int rem=0,sum=0;
        while(num>0)
        {
            rem=num%10;
            sum=sum+pow(rem,dig);
            num=num/10;
        }
        if(sum==i)
        {
            printf(" %d",sum);
        }
    }
    return 0;
}