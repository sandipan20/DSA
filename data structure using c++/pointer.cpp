#include<iostream>
#include<vector>
using namespace std;
int main(){
    float a=10.89;// or ___=10.98f
    int** n=NULL;// NULL pointers
    float* ptr=&a;// normal pointer 
    float** ptr1=&ptr;// pointer to a pointer
    cout<<ptr<<endl<<&a<<endl<<&ptr<<endl<<ptr1<<endl<<*&a<<endl<<*ptr<<endl<<**ptr1<<endl<<n<<endl;
    // cout<<*n<<endl;  // this part will give us error because we are tring to access a location whic doesn't exist.

    return 0;
}