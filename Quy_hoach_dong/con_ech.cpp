#include<bits/stdc++.h>

using namespace std;

long long dp[51];

int main() {
	int t;
	cin >> t;
	while(t--) {
		memset(dp,0,sizeof(dp));
		int n;
		cin >> n;
		dp[0] = dp[1] = 1;
		for(int i = 2; i <= n; i++) {
			for(int j = 1; j <= min(i,3); j++) {
				dp[i] += dp[i - j];
			}
		}
		cout << dp[n] << endl;
	}
	return 0;
}
