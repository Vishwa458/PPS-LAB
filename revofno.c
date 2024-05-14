#include<stdio.h>
int main()
{
    int num,rev,rem;
    printf("Enter a number to find the reverse of it");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        //printf("%d",rev);
        rev=rev*10+rem;
        num=num/10;
    }
    printf("reverse of a number is = %d ",rev);
    return 0;
}