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
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			while(a[i] > 0) {
				int j = a[i] % 10;
				s.insert(j);
				a[i] /= 10;
			}
		}
		for(int x : s) {
			cout << x << " ";
		}
		cout << endl;
	}
}
