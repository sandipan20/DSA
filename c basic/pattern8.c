#include<stdio.h>
int main()
{
    int count='A';
    for(int i='A';i<='E';i++)
    {
        for(int j='E';j>i;j--)
        {
            printf(" ");
        }
        for(int k='A';k<=i;k++)
        {
            printf("%c ",count);
            ++count;
        }
        printf("\n");
    }
    return 0;
}