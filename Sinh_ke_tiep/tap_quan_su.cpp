#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	 int n, k;
		cin >> n >> k;
		int a[k+1];
		int d[100] = {0};
		for(int i = 1; i <= k; i++) {
			cin >> a[i];
			d[a[i]] = 1;
		}
		for(int i = k; i >= 1; i--) {
			if(a[i] < n - k + i && a[i] < n) {
				a[i] += 1;
				for(int j = i + 1; j <= k; j++) {
					a[j] = a[j-1] + 1;
				}
				for(int j = 1; j <= k; j++) {
					d[a[j]] = 0;
				}
				break;
			}
		}
		int cnt = 0;
		for(int i = 1; i <= 40; i++) {
			if(d[i]) {
				cnt++;
			}
		}
		cout << cnt << endl;
}
}
		

	