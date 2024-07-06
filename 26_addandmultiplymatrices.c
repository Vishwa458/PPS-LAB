//WAP to add and multiply two matrices of order n*n.

#include<stdio.h>

int add1(int n,int m,int arr1[m][n],int arr2[m][n],int arr3[m][n]);

int mul1(int n,int m,int p,int q,int arr1[m][n],int arr2[p][q],int arr3[m][n]);

int read_matrix_A(int m,int n,int arr1[m][n]);

int read_matrix_B(int p,int q,int arr2[p][q]);


int main()
{
    int i,j,n,m,p,q,op;
    
    //reading array size
    printf("Enter order of array 1 : m*n(size of array): ");
    scanf("%d %d",&m,&n);

    printf("Enter order of array 2 : p*q(size of array): ");
    scanf("%d %d",&p,&q);

    int arr1[m][n],arr2[p][q],arr3[m][n];

        printf("Enter the operations required to be performed with arrays: 1-Addition 2-Multiplication: ");
        scanf("%d",&op);

        
        if(op==1)
            {
                if(m==p && n==q)
                    {
                    read_matrix_A(m,n,arr1);

                    read_matrix_B(p,q,arr2);

                    add1(m,n,arr1,arr2,arr3);

                    }
                else
                    {
                        printf("/invalid order of matrices");
                    }
                
            }
        else if(op==2)
            {
                if(n==p)
                    {
                    read_matrix_A(m,n,arr1);

                    read_matrix_B(p,q,arr2);

                    mul1(m,n,p,q,arr1,arr2,arr3);
                    }
                else
                    {
                        printf("/invalid order of matrices");
                    }

                
            }
        else
            {
            printf("\nInvalid operation");
            }
    
    return 0;

}

int read_matrix_A(int m,int n,int arr1[m][n])
{
        //reading first matrix
        printf("Enter the values for first matrix: ");
        for(int i=0;i<m;i++)
        {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        }
    
}


int read_matrix_B(int p,int q,int arr2[p][q])
{
        //reading second matrix
        printf("Enter the values for second matrix: ");
        for(int i=0;i<p;i++)
        {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        }   
}



int add1(int n,int m,int arr1[m][n],int arr2[m][n],int arr3[m][n])
    {
        int i,j;

          //performing addition operation on 2 arrays and storing in third array.
        printf("performing addition operation on 2 arrays and printing the result array.");
        for(i=0;i<m;i++)
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


int mul1(int m,int n,int p,int q,int arr1[n][m],int arr2[p][q],int arr3[m][q])
    {   
        int i,j,sum=0;
        
        //performing addition operation on 2 arrays and storing in third array.
        printf("performing multiplication operation on 2 arrays and printing the result array.\n");
        
        // Initialize result matrix with zeros
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < q; j++) 
            {
                arr3[i][j] = 0;
            }
        }
        
        
        
        for(i=0;i<m;i++)
        {
            //printf("\n");
            for(j=0;j<q;j++)
            {
                for(int k=0;k<p;k++)
                {
                    sum=sum+arr1[i][k]*arr2[k][j];
                    arr3[i][j]=sum;
                }
            }
        }

        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d ",arr3[i][j]);
            }
            printf("\n");
        }

    return 0;

    }


