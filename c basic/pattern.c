//wap to print the pattern 

#include<stdio.h>
int main()
{
    int i,j,n,c=1;
    printf("the no of row whiich is to be printed is");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",c);
            c++;
        }
        printf("\n\n");
    }
    return 0;
}