#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		priority_queue<long long, vector<long long>, greater<long long>> pq;
		for(long long i = 0; i < n; i++) {
			long long res;
			cin >> res;
			pq.push(res);
		}
		long long sum = 0;
		while(pq.size() > 1) {
			long long x = pq.top();
			pq.pop();
			long long y = pq.top();
			pq.pop();
			long long z = x + y;
			sum += z;
			pq.push(z);
		}
		cout << sum << endl;
	}
	return 0;
}
