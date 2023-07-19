#include<bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<vector<int>> v;
		for(int i = 0; i < n - 1; i++) {
			bool ok = false;
			for(int j = 0; j < n - i - 1; j++) {
				if(a[j] > a[j+1]) {
					swap(a[j],a[j+1]);
					ok = true;
				}
			}
			if(ok == false) {
				break;
			}
			vector<int> s;
			for(int j = 0; j < n; j++) {
				s.push_back(a[j]);
			}
			v.push_back(s);
		}
		for(int i = v.size() - 1; i >= 0; i--) {
			cout << "Buoc " << i + 1 << ": ";
			for(int x : v[i]) {
				cout << x << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
