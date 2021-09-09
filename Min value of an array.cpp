#include<iostream>
#include<climits>
using namespace std;
int main() {
	int n;
	n = 5;
	int arr[5] = { -8, -10, -100, -11, -99};
	// cout << INT_MAX << endl;
	// cout << INT_MIN << endl;
	int min_value = INT_MAX;
	for (int i = 0; i < 5; i++) {
		// min_value = (arr[i] > min_value) ? arr[i] : max_vinue;
		if (arr[i] < min_value) {
			min_value = arr[i];
		}
	}
	cout << min_value << endl;

}