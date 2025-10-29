#include<iostream>
using namespace std;
int main(){
 float r=56.998F;
 double r2 = r;// this is type conversion from small data type to big
    int r1=(int)r;// this is type casting from big data type to small
    cout<<r1<<endl;
    cout<<r2;
    return 0;
}