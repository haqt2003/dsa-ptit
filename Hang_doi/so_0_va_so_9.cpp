#include<bits/stdc++.h>

using namespace std;

string solve(int n) {
	queue<string> q;
	q.push("9");
	while(!q.empty()) {
		string res = q.front(); q.pop();
		int sum = 0;
		for(int i = 0; i < res.size(); i++) {
			sum = sum*10 + (int)(res[i] - '0');
		}
		if(sum % n == 0) {
			return res;
		}
		q.push(res+"0");
		q.push(res+"9");
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		cout << solve(n) << endl;
	}
	return 0;
}



