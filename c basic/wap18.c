//WAP to find the reverse of a number
#include<stdio.h>
int main()
{
    int n,r,rev=0;
    printf("the reverse of the no which is to be printed is ");
    for(scanf("%d",&n);n!=0;n=n/10)
    {
        r=n%10;
        rev=rev*10+r;
    }
    printf("reverse of no is %d ",rev);
    return 0;

}