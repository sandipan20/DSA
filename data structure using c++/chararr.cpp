#include<iostream>
using namespace std;
int main(){
    // char str[]="hello";
    // cout<<strlen(str)<<endl;
    char str[50];
    cout<<"enter the string ";
    // cin.getline(str,50);
    // cout<<str<<endl;
    cin.getline(str,50,'#');// here the third parameter is known as delimeter. when the input fn encounter the delimeter fn it stops taking in put after that.
    for(char ch:str){
        cout<<ch<<" ";
    }
    cout<<endl;

    return 0;
}