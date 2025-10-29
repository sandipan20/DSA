#include <iostream>
using namespace std;

int counter(int arr[], int tar,int idx,int size){
    if(tar==0) return 1;
    if(tar<0 || idx>=size) return 0;
    return counter(arr,tar,idx+1,size) + counter(arr,tar-arr[idx],idx ,size);
}
int main(){
    int arr[]={2,3,4}, tar=6;
    cout<<counter(arr,tar,0,3)<<endl;
    return 0;
} 