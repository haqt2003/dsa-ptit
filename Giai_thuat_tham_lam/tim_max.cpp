#include<bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int &i : a) cin >> i;
		sort(a,a+n);
		long long sum = 0;
		for(int i = 0; i < n; i++) {
			sum += a[i]*i;s
			sum %= mod;
		}
		cout << sum << endl;
	}
	return 0;
}
