#include<iostream>
using namespace std;

int sqsum(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return n*n*n + sqsum(n-1);
}

int main(){
    int n;
    cout<<"give input ";
    cin >>n;
    cout<<endl<<sqsum(n)<<endl;
    return 0;

}