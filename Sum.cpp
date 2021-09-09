#include<iostream>
using namespace std;
int main() {
	int n = 10;
	int sum = 0;
	// for (int i = 1; i <= n; i++) {
	// 	sum = sum + i;
	// }
	// cout << sum << endl;


	// sum of even numbers
	// for (int i = 1; i <= n; i++) {
	// 	if (i % 2 == 0) {
	// 		sum = sum + i;
	// 	}
	// }

	for (int i = 2; i <= n; i = i + 2) {
		sum = sum + i;
	}
	cout << sum << endl;
}