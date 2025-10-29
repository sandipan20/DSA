//WAP to convert binary number into decimal number and vice versa.
#include<stdio.h>
int main()
{
    int n,r,b=0,base=1;
    printf("the no which is to be converted is ");
    for(scanf("%d",&n);n!=0;  n=n/2)
    {
        r=n%2;
        b=b+r*base;
        base=base*10;
    }
    printf("decimal no is %d ",b);
    return 0;
}
// we have to combine these to for effective code


// #include<stdio.h>
// int main()
// {
//     int n,r,d=0,b=1;
//     printf("the no which is to be converted is ");
//     for(scanf("%d",&n);n!=0;  n=n/10)
//     {
//         r=n%10;
//         d=d+r*b;
//         b=b*2;
//     }
//     printf("decimal no is %d ",d);
//     return 0;
// }