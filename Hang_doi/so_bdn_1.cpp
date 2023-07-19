#include<bits/stdc++.h>

using namespace std;

void solve(long long n) {
	queue<long long> q;
	q.push(1);
	long long cnt = 0;
	while(!q.empty()) {
		long long res = q.front();q.pop();
		if(res <= n) {
			cnt++;
		}
		else break;
		q.push(res*10);
		q.push(res*10+1);
	}
	cout << cnt << endl;
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
