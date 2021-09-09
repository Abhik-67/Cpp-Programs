#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a, int b) {
	if (a < b) {
		return false;
	} else {
		return true;
	}
}
int main() {
	int n = 5;
	int a[] = {14, 33, 27, 35, 10};

	sort(a, a + n, cmp); //inbuilt sort

	cout << "Sorted Array" << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}