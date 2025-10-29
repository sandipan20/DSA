//WAP that swap value of two variable using third variable
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"the variables are ";
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"the nos after swapping a and b are "<<a<<" and "<<b<<" respectively";
    return 0; 
}
