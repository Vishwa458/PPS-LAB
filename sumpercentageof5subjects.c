#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5,total=0.0,percentage=0.0;
    printf("Eneter 5 subjects marks: ");
    scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);
    total=sub1+sub2+sub3+sub4+sub5;
    percentage=total/500*100;
    printf("Total marks obtained: %f",total);
    printf("Percentage obtained: %f",percentage);
    return 0;
}