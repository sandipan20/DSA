//WAP that takes two operands and one operator from the user 
// and perform the operation and prints the result by using Switch statement. 

#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("enter two no. a and b respectively on which you have to perform operation ");
    scanf("%d%d",&a,&b);
    printf("the operation which is to be performed is");
    fflush(stdin);
    scanf("%c",&c);
    if(c=='+')
    {printf("the add of %d and %d = %d",a,b,(a+b));}
    else if(c=='-')
    {printf("the substract of %d and %d = %d",a,b,(a-b));}
    else if(c=='*')
    {printf("the multiply of %d and %d = %d",a,b,(a*b));}
    else if(c=='/')
    {printf("the divide of %d and %d = %d",a,b,(a/b));}
    else if(c=='%')
    {printf("the modulas of %d and %d = %d",a,b,(a%b));}
    else
    {printf("wrong input");}
    return 0;
}