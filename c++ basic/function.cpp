// #include<iostream>
// using namespace std;

// int sum(int a, int b){ //this is a function 
//     return a+b;
// }

// int main(){
//     cout<<"enter the values of a and b"<<endl;
//     int a,b;
//     cin>>a>>b;
//     cout<<sum(a,b)<<" is the sum "<<endl;
// }

// to print the value of ncr

#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int ncr(int n,int r){
    int factn=factorial(n);
    int factr=factorial(r);
    int factnr=factorial(n-r);
    return factn/(factr*factnr);
}

int main(){
    int n=8,r=2;
    cout<<ncr(n,r)<<endl;
    return 0;
}