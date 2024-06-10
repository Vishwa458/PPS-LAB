//WAP to read 2 array elements and save sum of corresponding elements in third array and print them.
#include<stdio.h>
int main()
{
    int sizeofarray,i;
    printf("Enter the array size: ");
    scanf("%d",&sizeofarray);
    int numbers1[sizeofarray],numbers2[sizeofarray],numbers3[sizeofarray];
    printf("\n************************************************************************");
    printf("\nEnter elements for first array: \n\n");
    for(i=0;i<sizeofarray;i++)
    {
        printf("Index %d = ",i);
        scanf("%d",&numbers1[i]);

    }

    printf("\n************************************************************************");

    printf("\nEnter elements for second array: \n\n");

    for(i=0;i<sizeofarray;i++)
    {
        printf("Index %d = ",i);
        scanf("%d",&numbers2[i]);
        
    }

    printf("\n***********************************************************************");

    printf("\nSum of corresponding elements of two arrays:  \n");

    for(i=0;i<sizeofarray;i++)
    {
        numbers3[i]=numbers2[i]+numbers1[i];
        printf("\nIndex  %d = %d",i,numbers3[i]);
    }
}