//WAP to find the sum array elements
#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("enter the number of array elements: ");
    scanf("%d",&n);
    int numbers[n];
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        printf("\nEnter array element with index %d = ",i);
        scanf("%d",&numbers[i]);
        sum=sum+numbers[i];
    }
    printf("\nsum of array elements: %d", sum);
}