#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		stack<string> stk;
		for(int i = 0; i < s.length(); i++) {
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
				string s1 = stk.top();stk.pop();
				string s2 = stk.top();stk.pop();
				string tmp = s[i] + s2 + s1;
				stk.push(tmp);
			}
			else {
				stk.push(string(1,s[i]));
			}
		}
		cout << stk.top() << endl;
	}
	return 0;
}
