//&& and
// || or
#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a and b) {
		cout << "a is not equal to b" << endl;
	}  else {
		cout << "equal" << endl;
	}

	if (a || b) {
		cout << "one of them is non zero " << endl;
	}  else {
		cout << "both are zero" << endl;
	}
}
