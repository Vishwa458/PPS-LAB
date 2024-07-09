//WAP to swap two elements using the concepts of pointers
#include<stdio.h>
int swap(int *x,int *y); 

int main()
{
    int var1,var2,temp;

    //reading variables
    printf("Enter two variables values: ");
    scanf("%d %d",&var1,&var2);

    //swapping variables using pointers
    swap(&var1,&var2);            //call by reference

    printf("\n\nInside caller function");
    printf("\nAfter swapping values of two variables \n var1 = %d var2 = %d",var1,var2);

    return 0;
}

int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\nInside callee function");
    printf("\nAfter swapping values of two variables \n var1 = %d var2 = %d",*x,*y);
    return 0;
} 

