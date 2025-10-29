//WAP to find the roots of the quadratic equation.

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D,r1,r2,r,imag;
    printf("enter coefficients of quadratic equation \n");
    scanf("%d%d%d",&a,&b,&c);
    D=pow(b,2)-(4*a*c);
    if(D>0)
    {
       r1=(-b+ sqrt(D))/2*a;
       printf("root 1 = %d",r1);
       r2=(-b- sqrt(D))/(2*a);
       printf("root 2 =%d",r2);
    }
    else if(D==0)
    {
        r1=r2=-b/(2*a);
        printf("roots are equal =%d & %d",r1,r2);
    }
    else if(D<0)
    {
        r=-b/(2*a);
        imag=sqrt(-D)/(2*a);
        printf("roots are not real, roots are : r1=%d+i%d and r2= %d-i%d",r,imag,r,imag);
    }
return 0;
}