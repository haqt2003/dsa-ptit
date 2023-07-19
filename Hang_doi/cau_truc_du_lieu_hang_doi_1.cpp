#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int cnt;
		queue<int> q;
		cin >> cnt;
		int k;
		while(cnt--) {
			cin >> k;
			if(k == 1) cout << q.size();
			else if(k == 2) {
				(q.empty())? cout << "YES" : cout << "NO";
			}
			else if(k == 3) {
				int n;
				cin >> n;
				q.push(n);
			}
			else if(k == 4) {
				if(!q.empty()) q.pop();
			}
			else if(k == 5) {
				(q.empty()) ? cout << -1 : cout << q.front();
			}
			else if(k == 6) {
				(q.empty()) ? cout << -1 : cout << q.back();
			}
			cout << endl;
		}
	}
	return 0;	
}
