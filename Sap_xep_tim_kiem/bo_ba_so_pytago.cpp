#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		bool ok = false;
		for(int &i : a) cin >> i;
		sort(a,a+n);
		for(int i = 0; i < n - 2; i++) {
			for(int j = i + 1; j < n - 1; j++) {
				if(binary_search(a+j+1,a+n,sqrt(a[i]*a[i]+a[j]*a[j]))) {
					cout << "YES" << endl;
					ok = true;
					break;
				}
			}
		}
		if(ok == false) cout << "NO" << endl;
	}
	return 0;
}
