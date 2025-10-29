// WAP that accepts the marks of 5 subject and find the sum and percentage marks obtained by the student.

#include<stdio.h>
int main ()
{
int maths,science,hindi,english,sst,percentage;
printf("the marks of maths,science,hindi,english,sst are respectively");
scanf("%d%d%d%d%d",&maths,&science,&hindi,&english,&sst);
percentage=(maths+science+hindi+english+sst)/5;
printf("the percentage obtained by student is %d\n",percentage);
printf("the total marks obtained is %d",maths+science+hindi+english+sst);
return 0;
}