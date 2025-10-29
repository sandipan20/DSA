//WAP that takes two operands and one operator from the user 
// and perform the operation and prints the result by using Switch statement. 

#include<stdio.h>
int main()
{
    int a,b,c;
    char ch;
    printf("the two nos. on which operation is to be performed are ");
    scanf("%d%d",&a,&b);
    printf("the operation which is to be performed is ");
    fflush(stdin);
    scanf("%c",&ch);
    switch (ch)
    {
    case'+':
    c=a+b;
    printf("add = %d",c);
        break;
    case'-':
    c=a-b;
    printf("substract = %d",c);
        break;
        case'*':
    c=a*b;
    printf("multiply = %d",c);
        break;
        case'/':
    c=a/b;
    printf("divide = %d",c);
        break;
        case'%':
    c=a%b;
    printf("modulas of and b = %d",c);
        break;
    default:
    printf("wrong input");
        break;
    }
    return 0;
}