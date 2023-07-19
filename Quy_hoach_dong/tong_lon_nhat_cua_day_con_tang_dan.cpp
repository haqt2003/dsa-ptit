#include<bits/stdc++.h>

using namespace std;

int n;
int a[1001];
int dp[1001];

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int res = 0;
		for(int i = 0; i < n; i++) {
			dp[i] = a[i];
			for(int j = 0; j < i; j++) {
				if(a[j] <= a[i]) {	
					dp[i] = max(dp[i], dp[j] + a[i]);
				}
			}
			res = max(res,dp[i]);
		}
		cout << res << endl;
	}
	return 0;
}
