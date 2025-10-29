//wap to sum nos till n

#include<iostream>
using namespace std;
int main()
{
    int n,sum,counter;
    cout<<"the no is ";
    cin>>n;
    sum=0;
   for (counter=1;counter<=n;counter++)
     {
        sum=sum+counter;
     }
     cout<<sum<<endl;
     return 0;
   
}