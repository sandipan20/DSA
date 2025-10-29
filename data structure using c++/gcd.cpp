#include<iostream>
using namespace std;

int GCD(int a, int b){// this is a brute force approach  
    int gcd=1;
    for(int i=0;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        } else if(a==b){
            gcd=a;
        }else if(a==0 || b==0){
            gcd=max(a,b);
        }
    }
    return gcd;
}

int euclidGCD(int a, int b){
    while (a>0 && b>0){
        if(a>b){
            a%=b;
        } else{
            b%=a;
        }
    }
    if(a==0) return b;
    return a;
}
int gcdrec(int a, int b){// using recursion 
    if (b==0) return a;
    return gcdrec(b, a%b);
}

int lcm(int a, int b){
    int gcd=gcdrec(a,b);
    return a*b/gcd;

}

int main(){
    int a=20,b=28;
    cout<<GCD(a,b)<<endl;
    cout<< euclidGCD(a,b)<<endl;
    cout<< lcm(a,b)<<endl;

}