// sum of two numbers
// declaring, calling, defining functions

#include<iostream>
using namespace std;
int abs(int a) {
	if (a > 0) {
		return a;
	} else {
		return -a;
	}
}
int add(int x, int y) {
	int z = x + y;
	return z;
}
int main() {

	int a = 10;
	int b = 8;
	int c = 15;

	int d = abs(a);
	cout << d << endl;

	int sum = add(a, b);
	int total = add(sum, c);
	// int sum=a+b;
	cout << sum << endl;
	cout << total << endl;
}
