#include<iostream>
using namespace std;

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n* fact(n-1);
}
int sum(int n){
    if(n==0){
        return 0;
    }
    return n+ sum(n-1);
}
int main(){
    int n;
    cout<<"enter the no "<<endl;
    cin>>n;
    cout<<fact(n)<<endl;
    cout<<sum(n)<<endl;
    return 0;
}