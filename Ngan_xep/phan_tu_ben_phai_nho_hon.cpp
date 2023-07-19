#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		vector<int> v;
		for(int &i : a) cin >> i;
		for(int i = 0; i < n - 2; i++) {
			int idx;
			idx = upper_bound(a,a+n-2,a[i]) - a;
			if(idx < 0) v.push_back(-1);
//			cout << idx << " ";
			for(int j = idx + 1; j < n; j++) {
				if(a[j] < a[idx]) {
					v.push_back(a[j]);
					break;
				}
			}
		}
		for(auto x : v) {
			cout << x << " ";
		}
		cout << -1 << " " << -1;
		cout << endl;
	}
	return 0;
}
