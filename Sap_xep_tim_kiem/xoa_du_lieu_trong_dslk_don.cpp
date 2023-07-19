#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n;
	int a[n];
	set<int> s;
	for(int &i : a) {
		cin >> i;
		s.insert(i);
	}
	cin >> k;
	for(int &i : a) {
		if(i != k) cout << i << " ";
	}
	return 0;
}
