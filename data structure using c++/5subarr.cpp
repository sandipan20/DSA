#include<iostream>
#include<vector>
using namespace std;

int main(){
    int max_sum=INT_MIN;
    int n=5;
    int arr[]={1,2,3,4,5};
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int k=st;k<=end;k++){
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    for(int st=0;st<n;st++){
        int curr=0;
        for(int end=st;end<n;end++){
            curr+=arr[end];// here we directly calculate the total sum with only adding new term in the previously created sum of sb array.
            max_sum=max(max_sum,curr);// comparing the maximum with the current sum of sub array.
        }
        cout<<endl;
    }
    cout<<"max sum of the sub warray is "<<max_sum<<endl;
    return 0;
}