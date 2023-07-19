#include<bits/stdc++.h>

using namespace std;

int n, k, a[100];
vector<string> v;
set<string> s;

void nhap() {
	cin >> n >> k;
	for(int i = 0; i < n; i++) {
		string x;
		cin >> x;
		s.insert(x);
	}
	v.assign(s.begin(), s.end());
}

void in() {
	for(int i = 1; i <= k; i++) {
		cout << v[a[i] - 1] << " ";
	}
	cout << endl;
}

void Try(int i) {
	for(int j = a[i-1] +1; j <= v.size() - k + i; j++) {
		a[i] = j;
		if(i == k) in();
		else Try(i+1);
	}
}

int main() {
	nhap();
	Try(1);
	return 0;
}
