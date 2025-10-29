//wap to short an array using bubble sort system
#include<stdio.h>
int main()
{
    int a[10],i,n,j,temp;
    printf("NAME-SANDIPAN\nROLL NO.-2301920100272\n");
    printf("the no of the elements in the array ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("the a[%d] element is ",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("now sorted matrix is\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);      
    }
    return 0;
}
