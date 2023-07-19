#include<bits/stdc++.h>

using namespace std;

void solve(long long n) {
	vector<string> v;
	queue<string> q;
	q.push("6");
	q.push("8");
	while(!q.empty()) {
		string res = q.front();q.pop();
		if(res.length() > n) {
			break;
		}
		v.push_back(res);
		q.push(res+"6");
		q.push(res+"8");
	}
	cout << v.size() << endl;
	for(auto x : v) {
		cout << x << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		solve(n);
	}
	return 0;
}
