#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("enter the no of integer\n");
    scanf("%d",&n);
    int *ptr = (int *)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not availavible\n");
        exit(1);
    }
    for(i=0;i<n;i++)
    {
        printf("enter the no\t");
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    return 0;
}