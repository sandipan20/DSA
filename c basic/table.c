#include<stdio.h>
int main()
{
    int table,n,i;
    printf("the required table is");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        table=n*i;
        printf("%dx%d=%d\n",n,i,table);
        i++;
    }
    return 0;
}