#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n,m;
		cin >> n >> m;
		int a[n], b[m];
		set<int> s;
		vector<int> v;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			s.insert(a[i]);
		}
		for(int i = 0; i < m; i++) {
			cin >> b[i];
			s.insert(b[i]);
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(b[j] == a[i]) {
					v.push_back(b[j]);
				}
			}
		}
		for(int x : s) {
			cout << x << " ";
		}
		cout << endl;
		for(int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << endl;
		
	}
}
