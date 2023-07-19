#include<bits/stdc++.h>

using namespace std;

bool check = false;

vector<vector<int>> v;
vector<int> s;

void sinh(int b[], int n) {
	bool ok = false;
	for(int i = n - 1; i >= 0; i--) {
		if(b[i] == 0) {
			b[i] = 1;
			ok = true;
			for(int j = i + 1; j < n; j++) {
				b[j] = 0;
			}
			break;
		}
	}
	if(ok == false) check = true; 
}

void in(int a[], int b[], int n) {
	s.clear();
	for(int i = 0; i < n; i++) {
		if(b[i] == 1) {
			s.push_back(a[i]);
		}
	}
	sort(s.begin(),s.end());
}

bool ktr(int a[], int b[], int n, int k) {
	int sum = 0;
	for(int i = 0; i < n; i++) {
		if(b[i] == 1) {
			sum += a[i];
		}
	}
	if(sum == k) return true;
	return false;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		int b[100] = {0};
		for(int &i : a) {
			cin >> i;
		}
		sort(a,a+n);
		while(check == false) {
			if(ktr(a,b,n,k)) {
				in(a,b,n);
			v.push_back(s);	
			}
			sinh(b,n);
		}
		sort(v.begin(),v.end());
		if(v.size() == 0) {
			cout << -1;
		}
		else {
		for(int i = 0; i < v.size(); i++) {
			cout << "[";
			for(int j = 0; j < v[i].size() - 1; j++) {
				cout << v[i][j] << " ";
			}
			cout << v[i][v[i].size() - 1] << "]" << " ";
		}
		}
		cout << endl;
		check = false;
		v.clear();
	}
	return 0;
}
