#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		set<int> s;
		vector<int> v;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			s.insert(a[i]);
		}
		for(int x : s) {
			v.push_back(x);
		}
		if(v.size() > 1) {
			cout << v[0] << " " << v[1] << endl;
		}
		else{
			cout << -1 << endl;
		}
	}
}
