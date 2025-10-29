//wap to print m*n matrix
#include<stdio.h>
int main()
{
    int a[5][5],i,j,m,n;
    printf("enter the value of row and colum respectively");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter the a[%d][%d] element ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("the final matrix is \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }        
    return 0;
}