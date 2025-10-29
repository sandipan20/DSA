//WAP that tells whether a given year is leap year or not.

#include<stdio.h>   
int main()
{
    int year;
    printf("the year is ");
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0)
    {printf("the year %d  is a leap year",year);}
    else{printf("the year %d is not a leap year",year);}
    return 0;
}