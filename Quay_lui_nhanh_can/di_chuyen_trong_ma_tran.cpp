#include<bits/stdc++.h>

using namespace std;

int m,n;
int a[100][100];
bool check = false;
vector<string> v;
int dem = 0;

void Try(int i, int j, string s) {
//	if(a[n][n] == 0) {
//		check = false;
//		return;
//	}
	if(i == m && j == n) {
		check = true;
		v.push_back(s);
		return;
	}
	if(i < m) {
		Try(i+1,j,s+"D");
	}
	if(j < n) {
		Try(i,j+1,s+"R");
	}
	if(i > m || j > n) {
		return;
	}
}

void nhap() {
	for(int i = 1; i <= m; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> m >> n;
		nhap();
		Try(1,1,"");
		cout << v.size() << endl;
		v.clear();
	}
	return 0;
}
