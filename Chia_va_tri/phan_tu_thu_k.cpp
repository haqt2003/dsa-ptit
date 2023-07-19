#include<bits/stdc++.h>

using namespace std;

int m,n,k;

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> m >> n >> k;
		vector<int> a(m);
		vector<int> b(n);
		vector<int> c(m+n);
		for(int &i : a) cin >> i;
		for(int &i : b) cin >> i;
		merge(a.begin(),a.end(),b.begin(),b.end(), c.begin());
		cout << c[k - 1] << endl;
	}
	return 0;
}
