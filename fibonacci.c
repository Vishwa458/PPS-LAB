//print fibonacci series upto given N number.
#include<stdio.h>
int main()
{   
    int num,first=0,second=1,i,next;
    printf("enter the nmber to print fibonacci series upto the number: ");
    scanf("%d",&num);
    printf("%d %d",first,second);
    for(i=3;i<=num;i++)
    {
        next=first+second;
        first=second;
        second=next;
        printf(" %d",next);
    }
    return 0;
}