//wap to print multiplication of the matrix
# include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],i,j,k,c1,r,m,n;
    printf("order of first matris is  ");
    scanf("%d%d",&r,&c1);
    printf("order of second matrix is  ");
    scanf("%d%d",&m,&n);
    if(c1!=m)
    {
        printf("matrix multiplication not possible");
    }
    else
    {
        printf("enter first matrix \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("a{%d}{%d}= ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        }
        printf("enter second matrix \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("a{%d}{%d}= ",i+1,j+1);
                scanf("%d",&b[i][j]);
            }
        }
        printf("matrix multiplication is\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<n;j++)
            {
                c[i][j] =0;
                for(k=0;k<m;k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}