#include<bits/stdc++.h>

using namespace std;

int prio(char a) {
	if(a == '^') return 5;
	if(a == '*' || a == '/') return 4;
	if(a == '+' || a == '-') return 3;
	return 2;
}

void Solve() {
	string s;
	cin >> s;
	string res ="";
	stack<char> stk;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] >= 'A' && s[i] <= 'Z') res+= s[i];
		else if(s[i] >= 'a' && s[i] <= 'z') res+= s[i];
		else if(s[i] == '(') stk.push(s[i]);
		else if(s[i] == ')') {
			while(!stk.empty() && stk.top() != '(') {
				res += stk.top();
				stk.pop();
			}
			stk.pop();
		}
		else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
			while(!stk.empty() && prio(stk.top()) >= prio(s[i])) {
				res+= stk.top();
				stk.pop();
			}
			stk.push(s[i]);
		}
	}
	
	while(!stk.empty()) {
		if(stk.top() != '(') {
			res+= stk.top();
		}
		stk.pop();
	}
	
	cout << res << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		Solve();
	}
	return 0;
}
