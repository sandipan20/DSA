//WAP that swap value of two variable using third variable

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two no a & b respectively ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("after swaping the value of a and b is %d & %d",a,b);
    return 0;
}