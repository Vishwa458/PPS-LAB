//WAP to find the minimum and maximum element of an array
#include<stdio.h>
int main()
{
    //Declaration of an array
    int min,max,n,i;
    printf("Enter  the size of the array: ");
    scanf("%d",&n);
    int numbers[n];

    
    //Reading array elements
    printf("\nEnter the elements of an array: ");
    for(i=0;i<n;i++)
        scanf("%d",&numbers[i]);
    
    
    
    //Main logic
    min=max=numbers[0];
    for(i=1;i<n;i++)
    {
        if(min>numbers[i])
            min=numbers[i];
        if(max<numbers[i])
            max=numbers[i];
    }
    printf("Minimum element of an array %d\n",min);
    printf("Maximum element of an array of %d",max);
    return 0;
}