#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--) {
		vector<long long> v;
		long long n, m;
		cin >> n >> m;
		long long a[n], b[m];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			v.push_back(a[i]);
		}
		for(int i = 0; i < m; i++) {
			cin >> b[i];
			v.push_back(b[i]);
		}
		sort(v.begin(),v.end());
		for(int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << endl;
	}
}