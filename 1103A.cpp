#include<iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int low=INT_MAX,high=INT_MIN,n;
        cin>>n;
        while (n--)
        {
            int x;
            cin>>x;
            if(x>high)high=x;
            if(x<low)low=x;
        }
        int h=high+1;
        cout<<h-low<<endl;
    }
}