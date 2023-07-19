#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		stack<char> stk1;
		stack<char> stk2;
		vector<string> v;
		for(int i = 0; i < s.length()-1; i++) {
			if(s[i] >= '1' && s[i] <= '9') {
				stk1.push(s[i]);
			}
			else if(s[i] == ']') {
				string tmp = "";
				while(stk2.top() != '[') {
					tmp = stk2.top() + tmp;
					stk2.pop();
				}
				for(int i = 1; i < stk1.top(); i++) {
					tmp += tmp;
				}
				cout << tmp;
			}
			else stk2.push(s[i]);
		}
	}
	return 0;
}
