#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<multiset<int>> v;
	multiset<int> s;
	for(int i = 0; i < n; i++) {
		s.insert(a[i]);
		v.push_back(s);
	}
	for(int i = n - 1; i >= 0; i--) {
		cout << "Buoc " << i << ": ";
		for(int x : v[i]){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
