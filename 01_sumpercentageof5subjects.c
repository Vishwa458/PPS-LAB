/*WAP that accepts the marks of 5 subjects and finds the sum
and percentage of marks obtained by the student*/

#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5,total=0.0,percentage=0.0;
    
    //Reading 5 subjects marks
    printf("Eneter 5 subjects marks: ");
    scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);

    total=sub1+sub2+sub3+sub4+sub5;                 // Summing up subjects marks
    percentage=total/500*100;                       // Finding Percentage
    printf("Total marks obtained: %f",total);       // prinitng marks
    printf("Percentage obtained: %f",percentage);   // printing percentage
    return 0;
}