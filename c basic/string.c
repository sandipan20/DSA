// basic strring program with print and scanf
#include<stdio.h>
int main()
{
char a[10];
printf("enter str ");
scanf("%s",a);//we do not use & to store value in string 
//if we use %s as specifier for string
printf("%s",a);
return 0;
}