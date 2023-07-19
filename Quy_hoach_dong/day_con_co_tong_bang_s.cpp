#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, s;
		cin >> n >> s;
		int a, dp[10001] = {0};
		dp[0] = 1;
		for(int i = 1; i <= n; i++) {
			cin >> a;
			dp[a] = 1;
			for(int j = s; j >= a; j--) {
				if(dp[j - a] == 1) dp[j] = 1;
			}
		}
		if(dp[s] == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
