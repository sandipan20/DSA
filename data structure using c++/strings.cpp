#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str1="sandipan and ___ ";// dayanamic in nature, can be resize during runtime.
    // string str2="jaduu and ___";// dayanamic in nature, can be resize during runtime.
    // string str3=str1+str2;// string concatination;
    // cout<<str3<<endl;
    // cout<<(str1>str2)<<" "<<str1.length();

    string str;
    getline(cin,str);// we pass the getline fn to take input with all the spaces intact along with the enter ,
    // we pass cin argument to specify the task and variable in which it will be stored along with optional delimiter.
    cout<<str;

    return 0;
}