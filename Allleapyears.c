#include<stdio.h>
int main()
{
    int num=1,i=1;
    printf("Print all the leap year upto given year: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if((i%4==0)&&(i%400==0 || i%100!=0))
        printf(" %d",i);

    }
    return 0;
}