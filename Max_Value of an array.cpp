#include<iostream>
#include<climits>
using namespace std;
int main() {
	int n;
	n = 5;
	int arr[5] = { -8, -10, -100, -11, -99};
	// cout << INT_MAX << endl;
	// cout << INT_MIN << endl;
	int max_value = INT_MIN;
	for (int i = 0; i < 5; i++) {
		// max_value = (arr[i] > max_value) ? arr[i] : max_value;
		if (arr[i] > max_value) {
			max_value = arr[i];
		}
	}
	cout << max_value << endl;

}