#include<stdio.h>
void main ()
{
    int a=10;
    loop:do
    {
        if(a==15)
        {
            a++;
            goto loop;
        }
        printf("%d\n",a);
        a++;
    }
    while(a<=20);
}