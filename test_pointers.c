#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=10,i;
    int *p1;
    p1=&a;

    int arr1[100];

    int *p2;

    p2=arr1;

    printf("\nvalue of a: %d",*p1);
    printf("\nvalue of pointer p1: %d",p1);
    printf("\nAddress of pointer p1: %d",&p1 );

    printf("\naddress of a: %d",&a);

    for(i=0;i<100;i++)
    {
        arr1[i]=i*10;
    }

    printf("printing value array using pointer with indexing");
    for(i=0;i<100;i++)
    {
        printf("\npointer p2 at %d = %d",i,p2[i]);
    }

    printf("printing value of array using pointer without array indexing");
    i=0;
    while(i<100)
    {
    
        printf("\npointer p2 at %d",*p2);
        p2++;
        i++;
    }

    printf("printing value of array using pointer without array indexing");
    // Declare an array
    int v[3] = { 10, 100, 200 };

    // Declare pointer variable
    int* ptr;

    // Assign the address of v[0] to ptr
    ptr = v;

    for (int i = 0; i < 3; i++) 
    {

        // print value at address which is stored in ptr
        printf("\nValue of *ptr = %d\n", *ptr);

        // print value of ptr
        //printf("Value of ptr = %p\n\n", ptr);

        // Increment pointer ptr by 1
        ptr++;
    }
    return 0;
}