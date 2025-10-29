//WAP to find the sum of digits of the entered number. 
#include<stdio.h>
int main()
{
    int n,sum=0,r;
    printf("the no whose digit is to be sum is ");
    for(scanf("%d",&n);n!=0;n=n/10)
    {
        r=n%10;
        sum=sum+r;
    }
    printf("\n%d is the sum of digit",sum);
    return 0;
}