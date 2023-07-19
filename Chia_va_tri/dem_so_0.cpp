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
		int index;
		index = lower_bound(a,a+n,1) - a;
		cout << index << endl;
	}
	return 0;
}
