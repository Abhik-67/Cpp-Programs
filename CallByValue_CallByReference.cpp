#include<iostream>
using namespace std;
int add(int a, int b) {
	cout << a << " " << b << endl;
	a += 10;
	int z = a + b;
	return z;
}
void swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}
int main() {

	int a = 10;
	int b = 8;

	int sum = add(a, b);
	cout << a << " " << b << endl;
	// int sum=a+b;
	cout << sum << endl;
	cout << endl;

	cout << "In main function Before swapping" << endl;
	cout << a << " " << b << endl;
	swap(a, b);
	cout << "In main function After Swapping" << endl;
	cout << a << " " << b << endl;
}
