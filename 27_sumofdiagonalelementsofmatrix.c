//WAP to find sum of diagonal elements of m*n matrix
#include<stdio.h>
int main()
{
    int m=0,n=0,sum_of_diagonal=0, sum_of_opp_diagonal=0,i=0,j=0;

    //reading matrix of order m*n
    printf("Enter the matrix order of m*n: ");
    scanf("%d %d",&m,&n);

    int matrix[m][n];           //Declaring matrix


    //Initializing matrix with 0
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            matrix[i][j]=0;         
        }
    }


    //reading elements of matrix of order m*n
    printf("Enter the elements of matrix with order m*n: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    //calculating sum of diagonal elements of matrix
    if(m==n)
    {
        for(i=0;i<m;i++)
        {
            sum_of_diagonal=sum_of_diagonal+matrix[i][i];
            sum_of_opp_diagonal=sum_of_opp_diagonal+matrix[i][m-i-1];
        }
    }

    //printing sum of diagonal and opposite diagonal elements
    printf("printing sum of diagonal and opposite diagonal elements \n");
    printf("sum_of_diagonal = %d \nsum_of_opp_diagonal = %d",sum_of_diagonal,sum_of_opp_diagonal);

    return 0;

}