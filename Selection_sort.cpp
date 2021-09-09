#include<iostream>
using namespace std;
void selection_sort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min_idx = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] > a[min_idx]) {
				min_idx = j;
			}
		}
		if (min_idx != i)
			swap(a[min_idx], a[i]);

		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
}

int main() {

	int a[] = {17, 2, 1, 9, 8, 7, 13};
	int n = 7;
	cout << "Unsorted Array" << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	selection_sort(a, n);
	cout << "Sorted Array" << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

}