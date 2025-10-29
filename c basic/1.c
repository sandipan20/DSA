#include<stdio.h>
int fact (int num)
{
    if(num==0)
    {
        return(1);
    }
    else
    {
        return(num*fact(num-1));
    }
}
int main()
{
    int num,j;
    printf("enter the no");
    scanf("%d",&num);
    j=fact(num);
    printf("the factorial of the no is %d",j);
    return 0;
}