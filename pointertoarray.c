#include<stdio.h>
int main()
{
    int arr1[3],i;
    
   // int *ptr;

   // ptr=arr1; orelse

    int *ptr=arr1;

    //reading array values using poniter
    printf("Enter array values : ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&ptr[i]);
    }

    //printing array values using pointer
    printf("Array values: ");
       for(i=0;i<3;i++)
    {
        printf("%d ",ptr[i]);
    }


}
