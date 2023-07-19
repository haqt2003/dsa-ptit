#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		s = " " + s;
		stack<int> stk;
		for(int i = 1; i <= s.length(); i++) {
			if(s[i] == 'D') {
				stk.push(i);
			}
			else if(s[i] == 'I' || i == s.length()) {
				cout << i;
				while(!stk.empty()) {
					cout << stk.top(); stk.pop();
				}
			}
		}
		cout << endl;
	}
	return 0;
}
