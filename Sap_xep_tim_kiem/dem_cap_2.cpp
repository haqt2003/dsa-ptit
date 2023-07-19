#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int &i : a) cin >> i;
		sort(a,a+n);
		long long cnt = 0;
		for(int i = 0; i < n - 1; i++) {
			cnt += lower_bound(a+i+1,a+n,k + a[i]) - a - i - 1;
		}
		cout << cnt << endl;
	}
	return 0;
}
