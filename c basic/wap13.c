//WAP to find the factorial of a given number. 
#include<stdio.h>
int main()
{
    int fact=1,i,n;
    printf("enter terms ");
    scanf("%d",&n);
    i=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d = %d",n,fact);
    return 0;
}