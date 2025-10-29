#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>arr,int tar){
    int st=0, end=arr.size()-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(tar>arr[mid]){
            st=mid+1;
        }
        else if(tar<arr[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return-1;
}
int rbinarysearch(vector<int>arr,int tar,int st,int end){
    if (st<=end){
        int mid=st+(end-st)/2;
        if(tar>arr[mid]){
            return rbinarysearch(arr,tar,mid+1,end);
        } else if(tar<arr[mid]){
            return rbinarysearch(arr,tar,st,mid-1);
        } else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr1={-1,23,45,56,78,99,999};
    int tar=78;
    cout<<binarysearch(arr1,99)<<"th place"<<endl;
    cout << rbinarysearch(arr1, tar, 0, arr1.size() - 1) << "th place" << endl;
    
    return 0;

}