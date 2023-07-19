#include<bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

int dp[100001];

int main() {
	int t;
	cin >> t;
	while(t--) {
		memset(dp,0,sizeof(dp));
		int n, k;
		cin >> n >> k;
		dp[0] = dp[1] = 1;
		for(int i = 2; i <= n; i++) {
			for(int j = 1; j <= min(i,k); j++) {
				dp[i] += dp[i-j];
				dp[i] %= mod;
			}
		}
		cout << dp[n] << endl;
	}
	return 0;	
}
