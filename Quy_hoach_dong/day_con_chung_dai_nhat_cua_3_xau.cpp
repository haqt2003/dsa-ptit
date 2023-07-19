#include<bits/stdc++.h>

using namespace std;

int dp[101][101][101];

int main() {
	int t;
	cin >> t;
	while(t--) {
		memset(dp,0,sizeof(dp));
		int m,n,p;
		cin >> m >> n >> p;
		string x,y,z;
		cin >> x >> y >> z;
		int res = 0;
		for(int i = 1; i <= m; i++) {
			for(int j = 1; j <= n; j++) {
				for(int k = 1; k <= p; k++) {
					if(x[i-1] == y[j-1] && y[j-1] == z[k-1]) {
						dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
					}
					else {
						dp[i][j][k] = max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
					}
					res = max(res, dp[i][j][k]);
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}
