#include<bits/stdc++.h>

using namespace std;

int main() {
	stack<int> stk;
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		if(s == "PUSH") {
			int a;
			cin >> a;
			stk.push(a);
		}
		else if(s == "POP") {
			if(stk.empty()) {
				continue;
			}
			stk.pop();
		}
		else if(s == "PRINT") {
			if(stk.empty()) {
				cout << "NONE" << endl;
				continue;
			}
			cout << stk.top() << endl;
		}
	}
	return 0;
}
