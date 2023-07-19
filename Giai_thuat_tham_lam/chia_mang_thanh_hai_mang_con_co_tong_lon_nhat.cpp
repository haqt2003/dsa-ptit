#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		int z = min(n-k,k);
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a,a+n);
		int sum1 = 0, sum2 = 0;
		for(int i = 0; i < z; i++) {
			sum1+=a[i];
		}
		for(int i = z; i < n; i++) {
			sum2+= a[i];
		}
		cout << abs(sum2-sum1) << endl;
	}
	return 0;
}
