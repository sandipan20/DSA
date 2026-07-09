#include<iostream>
using namespace std;

int main(){
    int x,count=0;
    
    cin>>x;
    if(x<=5){
        cout<<1<<endl;
    } else{
        count=(x/5);
        if(x%5) count++;
        cout<<count<<endl;
    }
    return 0;
}