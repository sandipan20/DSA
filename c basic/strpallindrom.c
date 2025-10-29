// wap to check string is palindrom or not
#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int i,l;
    printf("enter the string\n");
    gets(a);
    l=strlen(a)-1;
    for(i=0;i<l/2;i++)
    {
        if(a[i]==a[l-i])
        {
            printf("palindrom");
            
            break;
        }
        else{printf("not a pallindrom");
        break;}
    }
    return 0;
}