#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		stack<int> stk;
		bool ok = true;
		for(int i = 0; i < s.length(); i++) {
			if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
				stk.push(s[i]);
			}
			else if(s[i] == ')') {
				if(stk.empty()) {
					ok = false;
					break;
				}
				if(stk.top() == '(') stk.pop();
			}
			else if(s[i] == ']') {
				if(stk.empty()) {
					ok = false;
					break;
				}
				if(stk.top() == '[') stk.pop();
			}
			else if(s[i] == '}') {
				if(stk.empty()) {
					ok = false;
					break;
				}
				if(stk.top() == '{') stk.pop();
			}
		}
		if(!stk.empty()) ok = false;
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
