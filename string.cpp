#include<iostream>
#include<algorithm> //for reverse function
using namespace std;
int main() {
	// char ch[100];
	// string ch = "HELLO";
	// cout << ch << endl;
	// int len = ch.size();
	// int len2 = ch.length();
	// cout << len << " " << len2 << endl;
	string s1 = "SHAPE";
	reverse(s1.begin(), s1.end());
	cout << s1 << endl;
	string s2 = "AI";
	int len = s1.size();
	for (int i = 0; i < len; i++) {
		cout << s1[i] << endl;
	}
	s2 = s1;
	// cout << s1 << " " << s2 << endl;
	// char ch = 'z';
	// cout << ch << endl;
	if (s1 == s2) {
		cout << "Equal" << endl;
	} else {
		cout << "Not Equal" << endl;
	}
	// string s3 = s1 + s2;
	// cout << s3 << endl;

}