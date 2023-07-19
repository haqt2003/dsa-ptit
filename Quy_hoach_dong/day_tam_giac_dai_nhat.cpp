#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n+1];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int ans = 0;
		int inc[n+1];
		int dec[n+1];
		memset(inc, 0, sizeof(inc));
		memset(dec, 0, sizeof(dec));
		inc[0] = 1;
		for(int i = 1; i < n; i++) {
			if(a[i-1] < a[i]) {
				inc[i] = inc[i-1] + 1;
			}
			else inc[i] = 1;
		}
		dec[n-1] = 1;
		for(int i = n - 2; i >= 0; i--) {
			if(a[i+1] < a[i]) {
				dec[i] = dec[i+1] + 1;
			}
			else dec[i] = 1;
		}
		for(int i = 0; i < n; i++) {
			ans = max(ans, dec[i] + inc[i] - 1);
		}
		cout << ans << endl;
	}
	return 0;
}
