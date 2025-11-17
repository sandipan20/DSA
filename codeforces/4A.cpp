#include<iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    if(!(w&1)&& w>1){
        //even
        cout<<"YES";
    } else{
        cout<<"NO";
    }
    return 0;
}