//wap to print the sum of elements of array
#include<stdio.h>
int main()
{
    int n,a[10],i,sum=0;
    printf("the nos of element in the array ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the elements ");
        scanf("%d",&a[i]);//to take the entry of elements
        printf("a[%d]=%d\n",i,a[i]);
        sum+=a[i];
    }
    printf("\nthe sum is %d",sum);
    return 0;
}