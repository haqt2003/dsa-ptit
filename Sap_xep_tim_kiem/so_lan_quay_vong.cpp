#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int &i : a) cin >> i;
		int r = 1, s = n - 2;
		bool ok = false;
		while(r <= s) {
			if(a[r] < a[r-1] && a[r] < a[r+1]) {
				cout << r << endl;
				ok = true;
				break;
			}
			else {
				r++;
			}
		}
		if(ok == false) {
			cout << 0 << endl;
		}
	}
	return 0;
}
