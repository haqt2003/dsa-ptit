#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<vector<int>> v;
	for(int i = 0; i < n - 1; i++) {
		vector<int> s;
		int min = i;
		for(int j = i + 1; j < n; j++) {
			if(a[j] < a[min]) {
				min = j;;
			}
		}
		swap(a[min],a[i]);
		for(int j = 0; j < n; j++) {
			s.push_back(a[j]);
		}
		v.push_back(s);
	}
	for(int i = n - 2; i >= 0; i--) {
		cout << "Buoc " << i+1 << ": ";
		for(int x : v[i]) {
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
