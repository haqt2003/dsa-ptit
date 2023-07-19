#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long k;
		cin >> k;
		string s;
		cin >> s;
		long long b[30] = {0};
		priority_queue<int> pq;
		for(long long i = 0; i < s.length(); i++) {
			b[(long long)s[i] - 'A']++;
		}
		for(long long i = 0; i < 26; i++) {
			if(b[i]) {
				pq.push(b[i]);
			}
		}
		while(k--) {
			long long res = pq.top();
			pq.pop();
			res--;
			pq.push(res);
		}
		long long sum = 0;
		while(!pq.empty()) {
			sum += pow(pq.top(), 2);
			pq.pop();
		}
		cout << sum << endl;
	}
	return 0;
}

