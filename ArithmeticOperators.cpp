#include<iostream>
using namespace std;
int main() {
	double a = 1.25;
	double b = 0.25;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a*b << endl;
	cout << a / b << endl;
	double d = a + b + (a * b);
	cout << d << endl;

	// ++ --
	// 1. increment
	// c = (a++); // post inc

	// c = a;
	// a++; // a = a+1;
	// c = (++a);
	// a++; a=a+1;
	// c=a;

	// 2.  decrement
	// c = (--a);

	// cout << c << endl;
	// cout << a << endl;

	// c = (++a); // pre inc

	// c = a++;
	// cout << c << endl;

	// c = a--;
	// cout << c << endl;

	// c = a--;
	// cout << c << endl;

	return 0;
}