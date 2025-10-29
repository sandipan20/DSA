#include<stdio.h>
int main()
{
    for(int i='A';i<='D';i++)
    {
        for(int j='A';j<=i;j++)
        {
            printf("%C",j);
        }
        printf("\n");
    }
    return 0;
}