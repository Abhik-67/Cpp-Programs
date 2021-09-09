#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int key = 10;

	// bool is_found = false;
	int i = 0;
	for (i = 0; i < n; i++) {
		if (a[i] == key) {
			// is_found = true;
			cout << "KEY is present at " << i << "th index" << endl;
			break;
		}
	}
	if (i == n)
		cout << "Key is not present" << endl;
}