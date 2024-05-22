#include<stdio.h>
int main()
{
    int no1,no2,no3,great;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&no1,&no2,&no3);
    if(no1>no2 && no1>no3)
    great=no1;
    else if(no2>no1 && no2> no3)
    great=no2;
    else
    great=no3;

    printf("Greatest of threee number is: %d", great);
    return 0;
}