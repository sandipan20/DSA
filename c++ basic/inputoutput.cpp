#include<iostream>
using namespace std;
/*here we have to write the (std::) because cout belongs to namespace std
 or we have to put (using namespace std) just below the header file.*/
int main()
 {
//    // std::cout<<"hello world"<<endl; 
//    cout<<"hello world\n";  //to break line we use (\n) or (<<endl;)
int a,b,total;
cin>>a;
cin>>b;
total=a+b;
cout<<total<<endl;
return 0;
}