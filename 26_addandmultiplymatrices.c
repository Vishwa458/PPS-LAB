//WAP to add and multiply two matrices of order n*n.

#include<stdio.h>
int main()
{
    int i,j,n;
    
    //reading array size
    printf("Enter value n(size of array): ");
    scanf("%d",&n);

    int arr1[n][n],arr2[n][n],arr3[n][n];

    //reading first matrix
    printf("Enter the values for first matrix: ");
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr1[i][j]);
    }
    }


    //reading second matrix
    printf("Enter the values for second matrix: ");
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr2[i][j]);
    }
    }

    //performing addition operation on 2 arrays and storing in third array.
    printf("performing addition operation on 2 arrays and storing in third array.");
    for(i=0;i<n;i++)
    {
        printf("\n");
    for(j=0;j<n;j++)
    {
        arr3[i][j]=arr1[i][j]+arr2[i][j];
        printf("%d ",arr3[i][j]);
    }
    }

    return 0;

}
