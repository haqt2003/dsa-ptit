#include<bits/stdc++.h>

using namespace std;

int n;
int a[100][100];
bool check = false;
vector<string> v;

void input() {
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	v.clear();
	check = false;
}

void Try(int i, int j, string s) {
	if(a[1][1] == 0 || a[n][n] == 0) {
		check = false;
		return;
	}
	if(i == n && j == n && a[i][j] == 1) {
		v.push_back(s);
		check = true;
		return;
	}
	if(i < n && a[i+1][j] == 1) {
		Try(i+1,j,s+"D");
	}
	if(j < n && a[i][j+1] == 1) {
		Try(i,j+1,s+"R");
	}
	if((i < n && j < n && a[i+1][j] == 0 && a[i][j+1] == 0) || i > n ||j > n) {
		return;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		input();
		Try(1,1,"");
		if(check == false) {
			cout << -1;
		}
		else {
			sort(v.begin(),v.end());
			for(auto x : v) {
				cout << x << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
