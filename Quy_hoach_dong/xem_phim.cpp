#include<bits/stdc++.h>

using namespace std;

int a[101];
int dp[101][25001];

int main() {
	memset(dp,0,sizeof(dp));
	int c, n;
	cin >> c >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= c; j++) {
			if(j < a[i]) {
				dp[i][j] = dp[i-1][j];
			}
			else {
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-a[i]] + a[i]);
			}
		}
	}
	cout << dp[n][c];
	return 0;
}
