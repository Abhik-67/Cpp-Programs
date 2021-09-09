#include<iostream>
using namespace std;
int main() {

	char ch[100];

	for (int i = 0; i < 5; i++) {
		cout << "Input char at pos " << i + 1 << " :";
		cin >> ch[i];
		cout << endl;
	}
	ch[5] = '\0';
	cout << ch << endl;
	// cin >> ch;

	// cout << sizeof(ch) << endl;
	int len = 0;
	for (int i = 0; ch[i] != '\0'; i++) {
		len++;
	}
	cout << len << endl;
}