#include<bits/stdc++.h>

using namespace std;

int main() {
	string s;
	int a;
	stack<int> stk;
	while(cin >> s) {
		if(s == "push") {
			cin >> a;
			stk.push(a);
		}
		else if(s == "pop") {
			stk.pop();
		}
		else if(s == "show") {
			if(stk.empty()) {
				cout << "empty" << endl;
				continue;
			}
			vector<int> v;
			while(!stk.empty()) {
				v.push_back(stk.top());
				stk.pop();
			}
			reverse(v.begin(), v.end());
			for(auto x : v) {
				cout << x << " ";
				stk.push(x);
			}
			cout << endl;
		}
	}
	return 0;
}
