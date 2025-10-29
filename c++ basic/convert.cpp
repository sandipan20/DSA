#include<iostream>
using namespace std;

int dtb(int n){
    int ans=0,pow=1;
    while(n>0){
        int r=n%2;
        n/=2;
        ans=ans+(r*pow);
        pow*=10;
    }
    return ans;
}

int btd(int n){
    int ans=0,pow=1;
    while(n>0){
        int r=n%10;
        ans+=(r*pow);

        n/=10;
        pow*=2;
    }
    return ans;

}

int main(){
    int n,o;
    cout<<"enter the no to be converted"<<endl;
    cin>>n;
    cout<<"enter the operation to be selected \n enter 1 for bin to dec \n enter 0 for dec to bin "<<endl;
    cin>>o;
    switch(o){
        case 0:
        cout<<dtb(n)<<endl;
        break;

        case 1:
        cout<<btd(n)<<endl;
        break;

        default:
        cout<<"invalid input"<<endl;
    }
    return 0;
}