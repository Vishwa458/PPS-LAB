//WAP to sort an array elelmets using bubble sort
#include<stdio.h>
int main()
{
    int i,j,size,temp=0;
    printf("Enetr the sizre of an array: ");
    scanf("%d",&size);
    int numbers[size];
    
    
    //Reading an array
    printf("Enter array elements of size %d \n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&numbers[i]);
    }


    //Sorting logic
    for(i=0;i<size-1;i++)                                // Outer loop 
    {
    for(j=0;j<(size-i-1);j++)                           //Inner loop //Runs every time 1 lesser iteration to the previous number of iterations.
    {                                                   //Every time loop runs shift the greates eliment to the last eliment 
        if(numbers[j]>numbers[j+1])                     
        {                                       
        temp=numbers[j];
        numbers[j]=numbers[j+1];
        numbers[j+1]=temp;
        }
    }
    }

    //Printing sorted array
    printf("Sorted array in ascending order\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",numbers[i]);
    }


}