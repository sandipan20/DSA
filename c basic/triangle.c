//WAP TO TELL THE TYPE OF TRIANGLE  

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("the sides of the triangle is ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
    {printf("the triangle is equilateral");}
    else if(a==b||b==c||c==a)
    {printf("the triangle is isoceles");}
    else{printf("the triangle is scalen");}
    return 0;
}