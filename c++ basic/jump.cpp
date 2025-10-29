//program to use jump statements break and continue

#include <iostream>
using namespace std;
int main(){

int money= 500;
    for(int i=1;i<=30;i++){
    if(i%2==0){
        continue;
    }
    if(money==0){
        break;
    }
    cout<<"go out today "<<endl;
    money-=50;
    }
    return 0;
}
