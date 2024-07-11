#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    int roll_no;
    char name[30];
    char branch[40];
    int batch;
};

struct student s1;

int main()
{

    //pointer to variable
    int a,i;
    int *p1;            
    p1=&a;              

    int arr1[100];

    printf("Enter value a: ");
    scanf("%d",p1);
    printf("\nvalue of a: %d",*p1);
    printf("\nvalue of pointer p1: %d",p1);
    printf("\nAddress of pointer p1: %d",&p1 );

    printf("\naddress of a: %d",&a);

    
    //pointer to array
    int *p2;

    p2=arr1;            

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
    
        printf("\npointer p2 at %d",p2[i]);
        //p2++;
        i++;
    }

    //printf("printing value of array using pointer without array indexing");
    // Declare an array
    int v[3];

    // Declare pointer variable
    int* ptrarray;

    // Assign the address of v[0] to ptr
    ptrarray = v;

    //Reading array values using pointer
    printf("Enter 3 array elements ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&ptrarray[i]);
    }

    for (int i = 0; i < 3; i++) 
    {

        // print value at address which is stored in ptr
        printf("\nValue of ptr[%d] = %d\n", i,ptrarray[i]);

        // print value of ptr
        //printf("Value of ptr = %p\n\n", ptr);

        // Increment pointer ptr by 1
        //ptrarray++;
    }

    
    //Pointer to stucture
    struct student s1;
    struct student *ptr_struct;
    ptr_struct=&s1;

    ptr_struct->roll_no = 100;
    strcpy(ptr_struct->name,"samarth");
    strcpy(ptr_struct->branch,"CSE");
    ptr_struct->batch=2022;

    //taking values from user
    printf("enter student roll no: ");
    scanf("%d",&ptr_struct->roll_no);
    printf("enter student name: ");
    scanf("%s",&ptr_struct->name);
    printf("enter student branch: ");
    scanf("%s",&ptr_struct->branch);
    printf("enter student batch: ");
    scanf("%d",&ptr_struct->batch);

    //using (). operator
    printf("%d\n",(*ptr_struct).roll_no);
    printf("%s\n",(*ptr_struct).name);
    printf("%s\n",(*ptr_struct).branch);
    printf("%d\n",(*ptr_struct).batch);

    //using arrow ->operator
    printf("%d\n",ptr_struct->roll_no);
    printf("%s\n",ptr_struct->name);
    printf("%s\n",ptr_struct->branch);
    printf("%d\n",ptr_struct->batch);


    return 0;


}