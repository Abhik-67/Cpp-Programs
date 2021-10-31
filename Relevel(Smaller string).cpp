/**
CODE-
Smaller String

Problem Statement :
You are given a number of N digits. You can change no 
more than K digits in the number and you need to make it as small as possible. 
You can’t have the digit 0 at the start if it has any digit to its right in the answer.

Constraints:
1  <=T  <=10
1 <= N  <= 5*10^5
0  <=K  <=N
 
Input Format :
First line contains a single integer T (the number of test cases).
First line of each test case contains two spaced integers  N and K.
Second line of each test case contains a number with N digits.
 
Output Format :
Print the smallest possible number of after making at most K changes. 
Print the answer of every test case in a new line.
 
Sample Input_1 :
3
3 3
900
Sample Output_1 :
100

Sample Input_2 :
6 2
12054
Sample Output_2 :
10004

Sample Input_3 :
1 1
8
Sample Output_3 :
0

Explanation of Sample :
In the first test case we change 9 to 1 as we can’t change it to zero and the rest of the digits are already minimum.
In the second test case we change 2nd and 4th digit as they give us the minimum value.
In the third test case we change 8 to 0 as there is nothing to the right side of 8.

 **/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		int k, n;
		cin>> n >>k >>s;
		if(n == 0 || k == 0){
			cout<< s<<"\n";
			continue;
		}
		if(n==1){
			cout<< "0" << endl;
			continue;
		}
		if(s[0]!= '1'){
			s[0]='1';
			k--;
		}
		int i= 1;
		while(k>0 && i<n){
			if(s[i]!='0'){
				s[i]='0';
				k--;
			}
			i++;
		}
		cout<<s<<endl;
	}
}
