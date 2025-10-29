//wap to print the sum of the all diag element of the matrix
#include<stdio.h>
int main()
{
    int a[5][5],n,i,j,sum=0;
    printf("the dimension of square matrix is of order \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("the matrix a[%d][%d] will be\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("the sum of the diagonal matrix will be ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || (i+j)==n-1)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d",sum);
    return 0;
}