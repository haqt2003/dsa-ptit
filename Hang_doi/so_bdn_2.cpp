#include<bits/stdc++.h>

using namespace std;

string solve(long long n) {
	queue<string> q;
	q.push("1");
	while(!q.empty()) {
		string res = q.front(); q.pop();
		long long tmp = 0;
		for(int i = 0; i < res.size(); i++) {
			tmp = tmp * 10 + (long long)(res[i] - '0');
		}
		if(tmp % n == 0) {
			return res;
		}
		q.push(res+"0");
		q.push(res+"1");
	}
}

int main() {	
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		cout << solve(n) << endl;
	}
	return 0;
}
