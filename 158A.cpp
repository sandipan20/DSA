#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val,count=0;
    val=arr[k-1];
    int j=0;
    while(j<arr.size() && arr[j]>=val && arr[j]>0){
        count++;
        j++;
    }
    cout<<count<<endl;
    return 0;
}