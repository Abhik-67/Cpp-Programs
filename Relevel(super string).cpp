/*

You are given a String  s of length N  you need to print a new string t of size N formed by using characters of string s such that:
The character of the i’th index of string “t” is the smallest lexicographical character in the given range of [0-k] inclusive and delete it from string s.


Example: s=”adbc” k=2
String t = “abcd”
s=”adbc” smallest element within range is “a” -> String t=”a”
s=”dbc” smallest element within range is “b”  -> String t=”ab”
s=”dc” smallest element within range is “c”  -> String t=”abc”
s=”d” smallest element within range is “d”  -> String t=”abcd”

Input Format:
First line contains input string s (consisting of only lowercase alphabets).
Second line contains a single integer k.
 
Output Format :
Print the smallest lexicographical string “t” as asked in the question.
 
Constraints:
1<= N <= 10^5
1<= K <= N
 
Sample input:
errichto
2

 Sample output:
erichrot

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n , k;
    cin >> s >> k;
    n = s.size();
    multiset <char> m;
    for(int i = 0 ; i < k ; i++) m.insert(s[i]);
    string ans = "";
    for(int i = k ; i < n ; i++){
        ans += *m.begin();
        m.erase(m.begin());
        m.insert(s[i]);
    }
    while(m.size() > 0){
        ans += *m.begin();
        m.erase(m.begin());   
    }
    cout << ans;
}
