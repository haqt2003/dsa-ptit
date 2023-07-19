#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		long long k;
		cin >> n >> k;
		long long a[n];
		for(long long i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a,a+n);
		long long cnt = 0; 
		for(long long i = 0; i < n - 2; i++) {
			for(long long j = i + 1; j < n - 1; j++) {
				long long index = lower_bound(a + j + 1, a + n, k - a[i] - a[j]) - a;
				cnt += (index - j - 1);
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
