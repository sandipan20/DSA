#include<iostream>
#include<vector>
using namespace std;
bool ispossible(vector<int> &a,int N,int c,int miniumallowedval){
    int cow=1,laststall=a[0];
    for(int i=1;i<N;i++){
        if((a[i]-laststall)>=miniumallowedval){
            cow++;
            laststall=a[i];
        }
        if(cow==c){
            return true;
        }
    }
    return false;
}
int getdistance(vector<int> &a,int N,int c){
    sort(a.begin(),a.end());
    int st=1,end=a[N-1]-a[0],ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(ispossible(a,N,c,mid)){
            ans=mid;
            st=mid+1;
        } else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    int N=5,c=3;
    vector<int>a={1,2,8,4,9};
    cout<<getdistance(a,N,c)<<endl;
    return 0;
}