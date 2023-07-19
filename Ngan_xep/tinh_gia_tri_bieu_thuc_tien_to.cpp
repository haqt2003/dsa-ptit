#include<bits/stdc++.h>

using namespace std;

int calc(int a, char math, int b) {
	if(math == '+') return a+b;
	if(math == '-') return a-b;
	if(math == '*') return a*b;
	return a/b;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		stack<int> stk;
		for(int i = s.length() - 1; i >= 0; i--) {
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
				int s1 = stk.top();stk.pop();
				int s2 = stk.top();stk.pop();
				int tmp = calc(s1,s[i],s2);
				stk.push(tmp);
			}
			else {
				stk.push(s[i] - '0');
			}
		}
		cout << stk.top() <<  endl;
	}
	return 0;
}
