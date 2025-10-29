#include<iostream>
#include<vector>
using namespace std;
int main(){
    int maxsum=INT_MIN,curr=0,s=7;
    int a[]={3,-4,5,4,-1,7,-8};
    for(int i=0;i<7;i++){
        curr+=a[i];
        maxsum=max(maxsum,curr);
        if(curr<=0){
            curr=0;
        }
    }
    cout<<"the sum is "<<maxsum<<endl;

    
    return 0;
}