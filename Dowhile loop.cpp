#include<iostream>
using namespace std;
int main() {
	int n;
	// cin >> n;
	n = 10;
	int current_no = n;
	// do {
	// 	cout << current_no << endl;
	// 	// current_no = current_no + 1;
	// 	// current_no += 1;
	// current_no++;
	// } while (current_no <= n);
	do {
		cout << current_no << " ";
		current_no--;
	} while (current_no <= 1);

	// while (current_no >= 1) {
	// 	cout << current_no << " ";
	// 	current_no--;
	// }

	// for (int current_no = n; current_no >= 1; current_no = current_no - 1) {
	// 	cout << current_no << endl;
	// }

}