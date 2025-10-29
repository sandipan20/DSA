//WAP to print sum of even and odd numbers from 1 to N numbers. 
#include<stdio.h>
int main ()
{
    int i,n,os=0,es=0;
    printf("the sum which is to be printed of even and odd till ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            es=es+i;
          
        }
        else
        {
            os=os+i;
           
        }
        i++;
    }
    printf("even sum = %d \n odd sum = %d ",es,os);
    return 0;
}