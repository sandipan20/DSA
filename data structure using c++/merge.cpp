#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &mat,int st,int mid,int end){
    vector<int> temp;
    int l=st,r=mid+1;
    while(l<=mid && r<=end){
        if(mat[l]<=mat[r]){
            temp.push_back(mat[l++]);
        } else{
            temp.push_back(mat[r++]);
        }
    }
    while(l <= mid){
        temp.push_back(mat[l++]);
    }
    while(r <= end){
        temp.push_back(mat[r++]);
    }
    for(int i=0;i<temp.size();i++){
        mat[st+i]=temp[i];
    }
}

void merge_sort(vector<int> &mat,int st,int end){
    if(st>=end) return;
    int mid=st+(end-st)/2;
    merge_sort(mat,st,mid);
    merge_sort(mat,mid+1,end);
    merge(mat,st,mid,end);
}

int main(){
    vector<int> mat;
    int n,e,st=0;
    cout<<"enter the size &\n"<<"enter the elements of the matrix"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>e;
        mat.push_back(e);
    }
    int end=mat.size()-1;
    merge_sort(mat,st,end);
    for(int i=0;i<n;i++){
        cout<<mat[i]<<" ";
    }
    return 0;
}
