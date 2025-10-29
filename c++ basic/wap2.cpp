//wap that calculate the si and ci ,the principle amount ,the rate ,time is to be entered by the user
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float p,r,t,si,ci;
    cout<<"the principle amount is\n";
    cin>>p;
    cout<<"the rate is \n";
    cin>>r;
    cout<<"the time is\n";
    cin>>t;
    si=p*r*t/100;
    ci = p*(pow((1+r/100),t)-1);
    cout<<"the si is "<<si<<endl;
    cout<<"the ci is "<<ci<<endl;
    cout<<"the total amount is "<<p*pow((1+r/100),t)<<endl;
    return 0 ;

}