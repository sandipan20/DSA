#include<iostream>
using namespace std;

class Students{
// bydefault yaha pe private: access modifer hota hai
public:
    string name;
    int age,roll;
    string grade;
    // public:// above this every thing is private.
    // void setname(string n){// this is a setter
    //     name=n;
    // }
    // void getname(){// this is a getter
    //     cout<<name;
    // }
};
int main(){
    // static memory allocation
    Students ram;
    ram.age=99;
    ram.grade='c';
    ram.roll=9;
    // ram.setname("sita");
    // ram.getname();

    // dayanamic memory allocation

    Students *s=new Students;
    (*s).age=998;
    (*s).name="sandy";
    cout<<(*s).name<<" "<<s->name<<endl;
    return 0;
}

