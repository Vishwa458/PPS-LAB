//WAP to search an elelment in an array using linear search
#include<stdio.h>
int main()
{
    //Declaration of variables
    int i,n,element=0,flag=0;
    printf("Enter size of an array: ");
    scanf("%d",&n);

    int numbers[n];

    //REading array elements
    printf("Eneter elements of an array of size %d: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }


    //scanning array elements to be searched
    printf("Enter the elelment to search: ");
    scanf("%d",&element);

    //searching logic
    for(i=4;i<n+4;i++)
    {
        if(element==numbers[i])
        {
            printf("Element found at array index location %d",i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Enetered element not found in the array!");
    }

    return 0;

}