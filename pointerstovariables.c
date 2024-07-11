#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;      //declaring pointer
    ptr=&a;         //initializing pointer with variable address

    printf("%d",*ptr);  // printing value of variable a using poniter with dereferencing operator *


    //reading variable value with pointer
    printf("enter value for a: ");
    scanf("%d",ptr);

    printf("%d",*ptr);

}