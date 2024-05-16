//print the sum of even and odd numbers from 1 to N
#include<stdio.h>
int main()
{
    int evensum=0,oddsum=0,i,num=0;
    printf("enter the number till sum of even and odd needs to be print: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        evensum=evensum+i;
        else
        oddsum=oddsum+i;
    }
    printf("sum of even nmbers: %d \nsum of odd numbers: %d",evensum,oddsum);
    return 0;
}
