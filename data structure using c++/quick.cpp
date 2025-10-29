#include<iostream>
using namespace std;

int part(vector<int> &mat,int st,int end){
    int pos=st;
    for(int i=st;i<=end;i++){
        if(mat[i]<=mat[end]){
            swap(mat[i],mat[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quicksort(vector<int> &mat,int st,int end){
    if(st>=end) return;
    int p=part(mat,st,end);
    //left
    quicksort(mat,st,p-1);
    quicksort(mat,p+1,end);

}

int main(){
    vector<int> mat;
    int n;
    cout<<"enter the size of matrix\n"<<"enter the elements of the matrix"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        mat.push_back(t);
    }
    quicksort(mat,0,mat.size()-1);
    for(int i :mat){
        cout<<i<<" ";
    }
    return 0;
}