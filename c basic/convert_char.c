// WAP that convert the upper case in lower case and lower case in upper case usin ASCII value system

#include<stdio.h>
int main()
{
    char ch;
    printf("the charecter is ");
    scanf("%c",&ch);
    if (ch>=65&&ch<=90)// range of A to Z.
    {
        ch=ch+32/*ch+=32*/;// on adding 32 we are jumping the range from upper case to lower case .
        printf("convrted charecter in lower case is %c",ch);//{65+32=97}:{90+32=122}
    }
    else if (ch>=97&&ch<=122)// range of a to z.
    {
        ch-=32/*ch=ch-32*/;// on substracting 32 we are jumping the range from lower case to upper case. 
        printf("converted charecter in upper case  is %c",ch);//{65+32=97}:{90+32=122}
    }
    else{printf("%c is a special charecter or a digit",ch);}
    return 0;
    
}