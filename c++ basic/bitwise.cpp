#include<iostream>
using namespace std;

int main (){
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the value "<<(a&b)<<" with and operator "<<endl;
    cout<<"the value "<<(a|b)<<" with or operator "<<endl;
    cout<<"the value "<<(a^b)<<" with xor operator "<<endl;
    cout<<"the value "<<(a<<b)<<" with left shift operator "<<endl;
    cout<<"the value "<<(a>>b)<<" with right shift operator "<<endl;
    
}