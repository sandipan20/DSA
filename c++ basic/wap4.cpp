//WAP that accept the temp in centigrade and converts int farenhite using the formula c/5=(f-32)/9

#include<iostream>
using namespace std;
int main()
{
    int c,f;
    cout<<"the tempereture in degree celcius is \n";
    cin>>c;
    f=(9*c)/5+32;
    cout<<f<<" degree is the tempereture in degree farenhite";
    return 0;
}