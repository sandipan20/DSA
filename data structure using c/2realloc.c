#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=(int*)malloc(2*sizeof(int));
    if(ptr==NULL)
    {
        printf("no element is persent");
        exit(1);
    }
    printf("enter two numbers");
    for(int i=0;i<2;i++)
    {
        scanf("%d",ptr+i);
    }

    ptr=(int*)realloc(ptr,4*sizeof(int));// realloc function updates the already
    //being used memory u need to paas the old pointer for first argument and new 
    // size as the second argument inside realloc function.
    if(ptr==NULL)
    {
        printf("no memory availaviable");
        exit(1);
    }
    printf("enter 2 values");
    for(int i=2;i<4;i++)
    {
        scanf("%d",ptr+i);
    }
    for(int i=0;i<4;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    return 0;
}