#include<iostream>
using namespace std;
int main()
{
    int a;
    a=12;
    cout<<"size of int is "<<sizeof(a)<<endl;

    float c;
    cout<<"size of float is "<<sizeof(c)<<endl;

    char b;
    cout<<"the size of char is  "<<sizeof( b )<<endl;

    bool d;
    cout<<"size of bool is "<<sizeof(d)<<endl;

    short int si;
    long int li;
    cout<<"size of short int is "<<sizeof(si)<<endl;
    cout<<"size of long int is  "<<sizeof(li)<<endl;

    return 0;
}