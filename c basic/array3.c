//wap to print sum of the element of two array and store in third array
#include<stdio.h>
int main()
{
    int i,a[10],b[10],n,c[i];
    printf("the no of elements in the arrays are ");
    scanf("%d",&n);
    printf("\nfirst array ");
    for(i=0;i<n;i++)
    {
        printf("\nenter no. %d element ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nsecond array ");
    for(i=0;i<n;i++)
    {
        printf("\nenter no. %d element ",i+1);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("\nc[%d]=%d",i+1,c[i]);
    }
    return 0;
}