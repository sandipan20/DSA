#include<iostream>
using namespace std;

// class Costumer{
// public:
//     string name;
//     int acc_no;
//     int balance;
//     Costumer(){
//         cout<<"counstructor called"<<endl;
//     }
//     // Costumer(string a,int b,int c){
//     //     name=a;
//     //     acc_no=b;
//     //     balance=c;
//     // }
//     Costumer(string name,int acc_no,int balance){// without using this we cant change the value in the object so we have to use this keyword that is a pointer
//         //to change the value int the created object.
//         (*this).name=name;
//         this->acc_no=acc_no;
//         this->balance=balance;// here this keyword is a pointer that holds the value of the main attribute of the class objects.
//     }
//     // inline Costumer(string name,int acc_no,int balance): name(name),acc_no(acc_no),balance(balance){}// its an inline counstructor.

//     //copy cunstructor;
//     Costumer (Costumer &b){// it is necessary to pass the object by refrence otherwise it goes in the infinite calling of copy counstructor.

//         name=b.name;
//         acc_no=b.acc_no;
//         balance=b.balance;
//     }
// };

// int main(){
//     Costumer Ai;
//     Costumer w("sandipan",74589,7534);
//     cout<<w.name<<endl;
//     cout<<w.balance<<endl;
//     cout<<w.acc_no<<endl;
//     Costumer ji(w);
//     cout<<ji.name<<endl;
//     cout<<ji.balance<<endl;
//     cout<<ji.acc_no<<endl;
//     Costumer hi;
//     hi=w;// works like copy counstructor but using assignment operator . it doesnt uses the copy counstructor.
//     cout<<hi.name<<endl;
//     cout<<hi.balance<<endl;
//     cout<<hi.acc_no<<endl;


// }

class Custom{
    int j;
    int* t;
public:
    Custom(){
        j=90;
        t=new int;
        *t=33;
        cout<<"contructer"<<endl;
    }
    ~Custom(){// it is unique in code and responsible for last min work before destroying the obj like freeing the memory and other last important tasks.
        delete t;
        cout<<"destruct"<<endl;
    }
};
int main(){
    Custom ar;
    Custom *r=new Custom;
    delete r; // if we dont call this then r will not be free;
}
