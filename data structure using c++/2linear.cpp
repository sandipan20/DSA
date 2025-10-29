#include<iostream>
using namespace std;

int search(int n,int a[],int s){
    int i;
    for(i=0;i<n;i++){
        if(n==a[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int s=6;
    int a[]={42,45,8,67,2,1};
    int n=8;
    cout<<search(n,a,s)<<endl;
    return 0;
}