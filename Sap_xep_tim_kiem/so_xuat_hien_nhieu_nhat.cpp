#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		map<int,int> mp;
		for(int &i : a) {
			cin >> i;
			mp[i]++;
		}
		int max = n/2;
		bool ok = false;
		for(int i = 0; i < n; i++) {
			if(mp[a[i]] > max) {
				max = a[i];
				ok = true;
			}
		}
		if(ok == false) {
			cout << "NO" << endl;
		}
		else {
			cout << max << endl;
		}
	}
	return 0;
}
