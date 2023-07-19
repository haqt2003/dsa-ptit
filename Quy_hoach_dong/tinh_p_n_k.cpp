#include<bits/stdc++.h>

using namespace std;

long long mod = 1e9 + 7;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int res = 1;
		if(k > n) res = 0;
		else {
			for(int i = n-k+1; i <= n; i++) {
				res = (res*i)%mod;
			}
		}
		cout << res << endl;
	}
	return 0;
}
