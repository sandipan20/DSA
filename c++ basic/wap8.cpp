// WAP that check wether the given no is even or odd
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"the no which is to be check ";
    cin>>a;
    if (a%2==0)
    {
        cout<<"the "<<a<<" is even ";
    }
    else{
        cout<<"the "<<a<<" is odd";
    }
    return 0;
}