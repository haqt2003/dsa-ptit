#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		int sum = 0;
		for(int &i : a) {
			cin >> i;
			sum += i;
		}
		bool ok = false;
		int tmp = 0;
		for(int i = 1; i < n - 1; i++) {
			tmp += a[i-1];
			if(tmp == sum - tmp - a[i]) {
				ok = true;
				cout << i + 1 << endl;
				break;
			}
		}
		if(ok == false) {
			cout << -1 << endl;
		}
	}
	return 0;
}
