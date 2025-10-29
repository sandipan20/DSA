#include<iostream>
using namespace std;

// void print(int n){
//     if(n==1){
//         cout<<"coder army "<<endl;
//         return;
//     }
//     cout<<"coder army "<<endl;
//     print(n-1);
// }
// void odd(int n){
//     if(n%2==0){
//         n-=1;
//     }
//     if(n==1){
//         cout<<n<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     odd(n-2);
// }
// void oddrev(int n){
//     if(n%2==0){
//         n-=1;
//     }
//     if(n==1){
//         cout<<n<<endl;
//         return;
//     }
//     oddrev(n-2);
//     cout<<n<<endl;
// }

void Table(int n,int mult){
    if(mult==1){
        cout<<n<<" *"<<" 1"<<" ="<<n*1<<endl;
        return;
    }
    Table(n,mult-1);
    cout<<n<<" *"<<mult<<" ="<<n*mult<<endl;
}

int main (){
    cout<<"enter the no"<<endl;
    int n,mult=10;
    cin>>n;
    // print(n);
    // odd(n);
    // oddrev(n);
    Table(n,mult);
    return 0;
}