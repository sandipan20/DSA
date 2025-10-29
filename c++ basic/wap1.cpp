// wap that accepts the marks of five subject and find the total marks and the percentage of the student 
#include<iostream>
using namespace std;

int main()
{
    int sum,math,sci,sst,hindi,english,percentage;
    cout<<"the marks of all 5 subjects are respectively"<<endl;
    cin>>math>>sci>>sst>>hindi>>english;
    sum=math+sci+sst+hindi+english;
    percentage=sum/5;
    cout<<"the total marks is "<<sum<<endl;
    cout<<"the agregete is "<<percentage<<"%\n";
    return 0;
}