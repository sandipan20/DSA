#include<stdio.h>
int serise(int i){
    if(i==0)
    {
        return 0;
    }
    else if(i==1)
    {
        return 1;
    }
    else
    {
        return serise(i-1)+serise(i-2);
    }
}
int main()
{
    int j,n,k;
    printf("the serise is to be printed till");
    scanf("%d",&n);
    for(j=0;j<=n;j++)
    {
    k = serise(j);
        printf("%d\t",k);

    }
    return 0;
}
