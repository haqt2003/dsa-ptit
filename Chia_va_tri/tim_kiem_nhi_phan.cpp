#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int index;
		int n,k;
		cin >> n >> k;
		vector<int> v(n);
		for(int i = 0; i < n; i++) cin >> v[i];
		sort(v.begin(),v.end());
		index = lower_bound(v.begin(),v.end(),k) - v.begin();
		if(v[index] == k) cout << index + 1 << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
