#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n], dp[n], M = -1;
		for(int &i : a) cin >> i;
		for(int i = 0; i < n; i++) {
			dp[i] = 1;
			for(int j = 0; j < i; j++)  if(a[j] <= a[i]) dp[i] = max(dp[i], dp[j] + 1);
			M = max(M, dp[i]);
		}
		cout << n - M << endl;
	}
	return 0;
}

