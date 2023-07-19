#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		long long a[n];
		long long b[n-1];
		for(long long &i : a) cin >> i;
		for(long long &i : b) cin >> i;
		for(int i = 0; i < n - 1; i++) {
			if(a[i] != b[i]) {
				cout << i + 1 << endl;
				break;
			}
		}
	}
	return 0;
}
