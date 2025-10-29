#include<iostream>
using namespace std;

string isprime(int n){
    int i;
    for(i=2;i*i<n;i++){
        if(n%i==0){
            return "not a prime";
        }
    }
    return "prime";
}



int main(){
    int n;
    cin>>n;
    cout<<isprime(n)<<endl;
    return 0; 
}