//WAP to add and multiply two matrices of order n*n.

#include<stdio.h>
int main()
{
    int i,j,n,m,op;
    
    //reading array size
    printf("Enter order of array n*m(size of array): ");
    scanf("%d %d",&n,&m);

    int arr1[n][m],arr2[n][m],arr3[n][m];

    printf("Enetr the operation required to be performed: 1-Addition 2-Multiplication");
    scanf("%d",&op);

    if(op==1){
        addition(n,m,arr1,arr2,arr3);}
    else if(op==2){
        multiplication(n,m,arr1,arr2,arr3);}
    else{
        printf("\nInvalid operation");}

    return 0;

}


void addition(int n,int m,int arr1[n][m],int arr2[n][m],int arr3[n][m])
    {
        int i,j;
        //reading first matrix
        printf("Enter the values for first matrix: ");
        for(i=0;i<n;i++)
        {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        }


        //reading second matrix
        printf("Enter the values for second matrix: ");
        for(i=0;i<n;i++)
        {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        }

        //performing addition operation on 2 arrays and storing in third array.
        printf("performing addition operation on 2 arrays and printing the result array.");
        for(i=0;i<n;i++)
        {
            printf("\n");
        for(j=0;j<m;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",arr3[i][j]);
        }
        }


    }


void multiplication(int n,int m,int arr1[n][m],int arr2[n][m],int arr3[n][m])
    {   
        int i,j,sum=0;
        //reading first matrix
        printf("Enter the values for first matrix: ");
        for(i=0;i<n;i++)
        {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        }


        //reading second matrix
        printf("Enter the values for second matrix: ");
        for(i=0;i<n;i++)
        {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        }

        //performing addition operation on 2 arrays and storing in third array.
        printf("performing multiplication operation on 2 arrays and printing the result array.");
        for(i=0;i<n;i++)
        {
            printf("\n");
        for(j=0;j<m;j++)
        {
            sum=sum+arr1[i][j]*arr2[i][j];
            arr3[i][j]=sum;
            printf("%d ",arr3[i][j]);
        }
        }


    }


