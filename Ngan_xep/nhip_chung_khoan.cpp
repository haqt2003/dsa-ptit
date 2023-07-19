#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		int b[n] = {};
		stack<int> stk;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < n; i++) {
			while(!stk.empty() && a[i] >= a[stk.top()]) {
				stk.pop();
			}
			if(stk.empty()) b[i] = i+1;
			else b[i] = i - stk.top();
			stk.push(i);
		}
		for(int i = 0; i < n; i++) {
			cout << b[i] << " ";
		}
		cout << endl;
	}
	return 0;
}