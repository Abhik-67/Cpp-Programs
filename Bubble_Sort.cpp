#include<iostream>
using namespace std;
void our_swap_function(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
void bubble_sort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] < a[j + 1]) {
				// they are not in order
				our_swap_function(a[j], a[j + 1]);
			}
		}
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
}

int main() {

	int a[] = {14, 33, 27, 35, 10};
	int n = 5;
	cout << "Unsorted Array" << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	bubble_sort(a, n);
	cout << "Sorted Array" << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

}