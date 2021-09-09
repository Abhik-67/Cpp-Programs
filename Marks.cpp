#include<iostream>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	if (n % 2 == 0 and n % 3 == 0) {
		cout << n << " is a multiple of both 2 and 3" << endl;
	} else if (n % 3 == 0) {
		cout << n << " is a multiple of 3" << endl;
	} else if (n % 2 == 0) {
		cout << n << " is a multiple of 2" << endl;
	} else {
		cout << "Not a multiple" << endl;
	}

	int marks;
	cin >> marks;
	if (marks >= 91) {
		cout << "O Grade" << endl;
	} else if (marks >= 81) {
		cout << "A+ Grade" << endl;
	} else if (marks >= 71) {
		cout << "A Grade" << endl;
	} else if (marks >= 33) {
		cout << "Pass" << endl;
	} else {
		cout << "Work Hard" << endl;
	}

	if (marks >= 95) {
		cout << "TOPPER" << endl;
	}

	else {
		cout << "Not a multiple" << endl;
	}
	bool form_filled = true;
	if (form_filled) {
		cout << "Present" << endl;
	} else {
		cout << "Absent" << endl;
	}

	// if (n == 10){
	// 	cout << "Hello World" << endl;
	// 	cout << "Bye" << endl;

	// }
}
