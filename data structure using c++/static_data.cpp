#include<iostream>
using namespace std;
class Customer{
    string name;
    int acc_no;
    int balance;
    static int total_customer;// this is the part of the class and creted along side class while others will be creatd alongside the object.
    // we can also access the total customer from int main by putting it in public. 
    static int bank_balance;
    public:

    static void access(){// static fn can only access static member
        cout<<total_customer<<endl;
        cout<<bank_balance<<endl;   
    }

    Customer(string a,int b,int c){
        name=a;
        acc_no=b;
        balance=c;
        ++total_customer;
        bank_balance+=balance;
    }
    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<endl;
        cout<<total_customer<<endl;
    }

};
int Customer :: total_customer=0;// this initializes the static var that can't be done inside the fn since we have to increse it ;
int Customer :: bank_balance=0;
int main(){
    // Customer::total_customer=9;
    Customer a("John", 1001, 5000);
    Customer b("Jane", 1002, 6000);
    Customer c("Mike", 1003, 7000);
    a.display();
    b.display();
    c.display();
    Customer::access();
    c.access();
    
}