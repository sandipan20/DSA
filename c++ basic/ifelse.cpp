#include<iostream>
using namespace std;

int main()
{
    int saving;
    cin>>saving;

    if(saving>5000)
    { if(saving>10000){cout<<"shoping";}
    else{cout<<"park";}
    }
    else if(saving>2000)
    {cout<<"friends";}
    else
    {cout<<"cancel bhai plan cancel";}
    return 0;
}