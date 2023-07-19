#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	int n, s, m;
	cin >> n >> s >> m;
	if(n < m) {
		cout << -1 << endl;
	}
	else if(n == m && s >= 7) cout << -1 << endl;
	else if(n > m && (n - m) * 6 < m) cout << -1 << endl;
	else {
		int k = 1;
		while(n * k < s * m) {
			k++;
		}
		cout << k << endl;
	}
	}
	return 0;
}
