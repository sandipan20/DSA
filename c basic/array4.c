//wap to find min and max element in an array
#include<stdio.h>
int main()
{
    int a[10],i,min,max;
    printf("enter array");
    for(i=0;i<10;i++)
    {
        printf("the a[%d] element is ",i);
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[1];
    for(i=0;i<10;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("\nmin =%d",min);
    printf("\nmax =%d",max);
    return 0;
}