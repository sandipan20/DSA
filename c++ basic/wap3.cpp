// wap to calculate the area and circumfrance of the circle 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float radii;
    cout<<"the radius of circle is \n";
    cin>>radii;
    cout<<2*3.14*radii<<" is the circumfrance of the circle\n";
    cout<<3.14*pow(radii,2)<<" is the area of the circle";
    return 0;
}