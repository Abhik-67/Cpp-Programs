// WRITE A PROGRAM TO FIND SUM OF THE DIGITS IN A NUMBER
#include<iostream>
using namespace std;
int main()
{
    int n;
    int rem;
    int s;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    while (n!=0)
    {
        rem=n%10; // rem is for remainder
        s+=rem;  // here we add the remainder in s
        n=n/10; //here we update n with n/10
    }
    cout<<"Sum of all the digits in the number is: "<<s;
    return 0;
}