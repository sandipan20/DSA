// WAP that calculate the simple interest and compound interest . the principle amount ,rate of interest and the time entered through keyboard.

#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,si,ci;
    printf("the principle amount is ");
    scanf("%f",&p);
    printf("the rate is ");
    scanf("%f",&r);
    printf("the time is ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    ci = p*(pow((1+r/100),t)-1);
    printf("the simple interest is %.2f \n the compound interest is %.2f",si,ci);
    return 0;
}