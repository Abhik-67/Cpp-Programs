#include<iostream>
using namespace std;
int len(char ch[100]) {
	int length = 0;
	for (int i = 0; ch[i] != '\0'; i++) {
		length++;
	}
	return length;
}
bool is_palindrome(char s[100]) {
	int i = 0;
	int j = len(s) - 1;
	while (i <= j) {
		if (s[i] == s[j]) {
			i++;
			j--;
		} else {
			return false;
		}
	}
	return true;
}

int main() {
	char s[100];
	cin >> s;
	if (is_palindrome(s) == true) {
		cout << "Palindrome" << endl;
	} else {
		cout << "Not Palindrome" << endl;
	}
}