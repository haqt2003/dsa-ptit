#include<bits/stdc++.h>

using namespace std;

long long n, v;
long long dp[1001][1001];
pair<long long, long long> a[1001];

int main() {
	int t;
	cin >> t;
	while(t--) {
		memset(dp,0,sizeof(dp));
		cin >> n >> v;
		for(long long i = 1; i <= n; i++) {
			cin >> a[i].first; 
		}
		for(long long i = 1; i <= n; i++) {
			cin >> a[i].second; 
		}
		for(long long i = 1; i <= n; i++) {
			for(long long j = 1; j <= v; j++) {
				if(j < a[i].first) {
					dp[i][j] = dp[i-1][j];
				}
				else {
					dp[i][j] = max(dp[i-1][j], dp[i-1][j - a[i].first] + a[i].second);
				}
			}
		}
		cout << dp[n][v] << endl;
	}
	return 0;
}
