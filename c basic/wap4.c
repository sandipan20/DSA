//WAP that accept the temp in centigrade and converts into farenhite using the formula c/5=(f-32)/9

#include<stdio.h>
int main()
{
    int c,f;
    printf("the centigrade tempereture is ");
    scanf("%d",&c);
    f=(9*c)/5+32;
    printf("the tempereture in farenhite is %d",f);
    return 0;
}