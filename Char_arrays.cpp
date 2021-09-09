#include<iostream>
using namespace std;
int main() {

	float b[] = {1.9, 2.0, 3.9};
	cout << b << endl;

	char c[] = {'h', 'e', 'l', 'l', 'o'};
	cout << c[0] << endl;
	cout << c[1] << endl;
	cout << c[2] << endl;
	cout << c[3] << endl;
	cout << c[4] << endl;



	// char a[] = {'s', 'h', 'a', 'p', 'e', '\0'};
	// cout << a << endl;

	// char s1[] = {'h', 'e', 'l', 'l', 'o'}; // not terminated with null char
	// cout << s1 << endl;
	// cout << sizeof(s1) << endl;

	char s2[] = "hello"; // another way
	cout << sizeof(s2) << endl;
	cout << s2 << endl;
	return 0;

}