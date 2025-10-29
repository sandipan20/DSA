#include<iostream>
using namespace std;

void digits(int n){
    while (n!=0){
        int r=n%10;
        cout<<r<<endl;
        n=n/10;
    }
}

bool isarmstrong(int n){
    int copy=n, sumcube=0;

    while(n != 0){
        int dig = n % 10;
        sumcube += dig * dig * dig;
        n /= 10;
    }

    return sumcube == copy;
}

int main(){
    int n=123;
    digits(n);
    cout<<(int)log10(n)+1<<endl;
    if(isarmstrong(n)){
        cout<<"an arm strong no ";
    } else{
        cout<<"not an armstrong no";
    }
    return 0;
}