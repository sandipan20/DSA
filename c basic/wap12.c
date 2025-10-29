//WAP to print the sum of all numbers up to a given number. 

#include<stdio.h>
int main ()
{
    int i,n,sum=0;
    printf("the no is ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=i+sum;
        i++;
    }
    printf("the sum is %d ",sum);
    return 0;
}