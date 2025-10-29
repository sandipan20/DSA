#include<iostream>
using namespace std;

int main(){
    int a[]={5,99,87,75,-4,34};
    int size=6;
    int smallest =INT_MAX;
    int largest =INT_MIN;
    for(int i=0;i<size;i++){
        // if (smallest>a[i]){
        //     smallest=a[i];
        // }   or
        smallest=min(smallest,a[i]);
    }
    
    
    cout<<"smallest is equal to "<<smallest<<endl;
    return 0;
}