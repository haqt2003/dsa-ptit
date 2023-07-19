#include<bits/stdc++.h>

using namespace std;

bool check = false;
vector<char> v;

void sinh(int a[], int n) {
	bool ok = false;
	int i = n - 1;
	while(i > 0 && a[i] > a[i+1]) i--;
	if(i > 0) {
		int k = n;
		while(a[k] < a[i]) k--;
		if(k > i) {
			ok = true;
			swap(a[i],a[k]);
			int r = i + 1, s = n;
			while(r <= s) {
				swap(a[r],a[s]);
				r++;
				s--;
			}
		}
	}
	for(int i = 1; i <= n; i++) {
		v.push_back((char)(a[i]));
	}
	if(ok == false) check = true;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		v.clear();
		int a[1005];
		string s;
		cin >> s;
		int n = s.length();
		for(int i = 0; i < n; i++) {
			a[i+1] = s[i];
			v.push_back((char)(s[i]));
		}
		while(check == false) {
			for(auto x : v) {
				cout << (char)x;
			}
			v.clear();
			sinh(a,n);
			cout << " ";
		}
		cout << endl;
		check = false;
	}
	return 0;
}
