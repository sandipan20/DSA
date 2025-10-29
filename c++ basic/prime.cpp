#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no to check prime or not"<<endl;
    cin>>n;
    bool isprime =true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }

    if(isprime==true){
        cout<<"the no is prime"<<endl;
    }
    else{
        cout<<"is not a prime"<<endl;
    }
    return 0;
}

// another method chage in the cheching condition of for

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the no to check prime or not"<<endl;
//     cin>>n;
//     bool isprime =true;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             isprime=false;
//             break;
//         }
//     }

//     if(isprime==true){
//         cout<<"the no is prime"<<endl;
//     }
//     else{
//         cout<<"is not a prime"<<endl;
//     }
//     return 0;
// }