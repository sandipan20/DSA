#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)//row
    {
        for(j=1;j<i;j++)//space
        {
            printf(" ");
        }
        for(k=i;k<=4;k++)//column
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}