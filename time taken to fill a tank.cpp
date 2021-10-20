//Time required to full a rectangular tank

#include<iostream>
using namespace std;
int main()
{
    int l,b,h,r;
    cout<<"Length of the tank: ";
    cin>>l;
    cout<<"Breadth of the tank: ";
    cin>>b;
    cout<<"Heigth of the tank: ";
    cin>>h;
    cout<<"Volume of the tank: "<<(l*b*h)<<endl;
    cout<<"Rate at which pipe fills the tank: ";
    cin>>r;
    cout<<"Time required to fill the tank full: "<<((l*b*h)/r);
    return 0;
}
