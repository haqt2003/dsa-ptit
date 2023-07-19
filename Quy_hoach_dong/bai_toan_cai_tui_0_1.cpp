#include<bits/stdc++.h>

using namespace std;

int dp[5000][10001];
int n,v;

int main() {
		cin >> n >> v;
		int a[n+1];
		int c[n+1];
		for(int i = 1; i <= n; i++) {
			cin >> a[i] >> c[i];
		}
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= v; j++) {
				if(j < a[i]) {
					dp[i][j] = dp[i-1][j];
				}
				else {
					dp[i][j] = max(dp[i-1][j], dp[i-1][j - a[i]] + c[i]);
				}
			}
		}
		cout << dp[n][v] << endl;
	return 0;
}
