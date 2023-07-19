#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n+1];
	vector<int> c;
	vector<int> l;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		if(i % 2 != 0) {
			l.push_back(a[i]);
		}
		else {
			c.push_back(a[i]);
		}
	}
	sort(l.begin(), l.end());
	sort(c.rbegin(), c.rend());
	for(int i = 0; i < c.size(); i++) {
		cout << l[i] << " " << c[i] << " ";
	}
	if(n%2 != 0) cout << l.back();
	return 0;
}
