//wap to print transpose of the matrix

#include<stdio.h>
int main()
{
    int a[5][5],i,j,r,c;
    printf("the rows and colums of martrix are r and c respectively\n");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("the element a[%d][%d] is ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("transpose of the entered matrix is \n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}