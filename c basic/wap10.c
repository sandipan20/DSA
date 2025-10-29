// WAP to print the grades according to 5 subject based on given criteria.

#include<stdio.h>
int main()
{
    int math,sci,eng,hindi,sst,sum,per;
    printf("the marks of math,science,english,hindi,sst are respectively ");
    scanf("%d%d%d%d%d",&math,&sci,&eng,&hindi,&sst);
    sum=math+sci+eng+hindi+sst;
    per=sum/5;
    printf("the marks is %d\n",sum);
    printf("the percentage is %d\n",per);
    if(per>=90&&per<=100)
    {printf("grade a");}
    else if(per>=80&&per<90)
    {printf("grade b");}
    else if(per>=60&&per<80)
    {printf("grade c");}
    else if(per<60)
    {printf("grade d");}
    return 0;
}