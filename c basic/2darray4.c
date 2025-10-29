//wap to add 2 matrix
#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],n,i,j,sum=0;
    printf("the dimension of square matrix is of order \n");
    scanf("%d",&n);
    printf("enter first array \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("the matrix a[%d][%d] will be\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter second array\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("the matrix a[%d][%d] will be\n",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("sum of the two matrix is \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}