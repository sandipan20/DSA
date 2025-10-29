//WAP to check whether the entered number is prime or not. 

#include<stdio.h>
int main()
{
    int i,n,c=0;
    printf("enter no ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c+=1;
        }
    }
    if(c==2)
    {
        printf("prime no");
    }
    else
    {
        printf("not a prime");
    }
    return 0;
}    