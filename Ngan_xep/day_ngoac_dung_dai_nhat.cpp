#include<bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		stack<int> stk;
		stk.push(-1);
		int res = 0;
		for(int i = 0; i < s.length(); i++) {
			if(s[i] == '(') {
				stk.push(i);
			}
			else {
				stk.pop();
				if(!stk.empty()) {
					res = max(res, i - stk.top());
				}
				else {
					stk.push(i);
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}




