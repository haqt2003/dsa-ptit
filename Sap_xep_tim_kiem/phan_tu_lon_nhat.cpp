#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a,a+n);
		int i = n - 1;
		while(k > 0) {
			cout << a[i] << " ";
			k--;
			i--;
		}
		cout << endl;
	}
}
