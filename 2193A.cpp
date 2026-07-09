#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        int total=0;
        for(int i=0;i<n;i++){
            int e;
            cin>>e;
            total+=e;
        }
        if(total<=s&& (s-total)%x==0){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
