#include<bits/stdc++.h>

using namespace std;

void in(int a[], int n, int k) {
	int index;
	index = lower_bound(a,a+n,k) - a;
	if(a[index] != k) index--;
	if(index >= 0) cout << index + 1 << endl;
	else cout << -1 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int &i : a) cin >> i;
		in(a,n,k);
	}
	return 0;
}
