//Program to check whether enterd year is a leap year or not
#include<stdio.h>
int main()
{
    int yr;
    printf("entr year: ");
    scanf("%d",&yr);
    if((yr%4==0)&&(yr%400==0 || yr%100!=0))
        printf("year is leap year!");
    else
        printf("year is not a leap year");
    return 0;
}