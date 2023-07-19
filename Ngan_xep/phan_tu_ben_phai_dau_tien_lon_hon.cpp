#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int &i : a) cin >> i;
		vector<int> v;
		v.push_back(-1);
		stack<int> stk;
		stk.push(a[n-1]);
		for(int i = n - 2; i >= 0; i--) {
			while(!stk.empty()) {
				if(stk.top() > a[i]) {
					v.push_back(stk.top());
					break;
				}
				else {
					stk.pop();
				}
			}
			if(stk.empty()) v.push_back(-1);
			stk.push(a[i]);
		}
		for(int i = v.size() - 1; i >= 0; i--) {
			cout << v[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
