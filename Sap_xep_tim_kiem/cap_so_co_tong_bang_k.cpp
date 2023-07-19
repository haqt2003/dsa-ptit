#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, k;
		cin >> n >> k;
		long long a[n];
		for(long long &i : a) cin >> i;
		long long cnt = 0;
		sort(a,a+n);
		for(int i = 0; i < n - 1; i++) {
			cnt += ((upper_bound(a+i+1,a+n,k-a[i]) - a) - (lower_bound(a+i+1,a+n,k-a[i]) - a));
		}
		cout << cnt  << endl;
	}
	return 0;
}
