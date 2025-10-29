//wap to store 1 to n element in an array & also print it
#include<stdio.h>
int main()
{
    int i,a[10],n;
    printf("the no of term which is to be entered is");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the digit");
        scanf("%d",&a[i]);
        printf("a[%d]=%d",i,a[i]);
    }
    return 0;
}