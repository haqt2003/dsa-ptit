#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		int dp[n];
		for(int &i : a) cin >> i;
		dp[0] = a[0]; dp[1] = max(a[0], a[1]);
		for(int i = 2; i < n; i++) {
			dp[i] = max(dp[i-1], dp[i-2] + a[i]);
		}
		cout << dp[n-1] << endl;
	}
	return 0;
}
