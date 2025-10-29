//wap to print the factorial serise upto n - {1+2!+3!......n!}
#include<stdio.h>
int main()
{
    int i,j,sum=0,n,f=1;
    printf("the no of terms in the serise is  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            f*=j;//f=f*j;
        }
        sum+=f;//sum=sum+f
        f=1;
    }
    printf("the sum is %d ",sum);
    return 0;
}