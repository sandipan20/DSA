#include<iostream>
#include<vector>// each time vector grows it grows by 2X.
using namespace std;
int main(){
    vector<int> vec(5,0);// first num is times second one is the member which is first argument times 
    vector<int> sandy;
    vector<char> ve={'a','b','c','e'};
    vec.push_back(36);
    cout<<"size="<<ve.size()<<endl;
    cout<<"size="<<vec.size()<<endl;
    for(char i :ve){// for each loop 
        cout<<" "<<i;
    }
    cout<<endl;
    for(int j :vec){// for each loop 
        cout<<" "<<j;
    }
    cout<<endl;
    cout<<vec.back()<<endl;
    vec.pop_back();
    for(int j :vec){// for each loop 
        cout<<" "<<j;
    }
    cout<<endl;
    cout<<ve.front()<<endl;
    cout<<ve.at(3)<<endl;

    sandy.push_back(5);
    sandy.push_back(6);
    sandy.push_back(7);
    cout<<sandy.size()<<endl;
    cout<<sandy.capacity()<<endl;
    return 0;
}