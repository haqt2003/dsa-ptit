#include<bits/stdc++.h>

using namespace std;

int n, a[20], b[20];
vector<string> v;

void nhap() {
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
}

void print() {
	int res = INT_MIN, cnt = 0;
	for(int i = 1; i <= n; i++) {
		if(b[i] == 1) {
			if(res < a[i]) {
				res = a[i];
				cnt++;
			}
			else return;
		}
	}
	if(cnt < 2) return;
	string tmp;
	for(int i = 1; i <= n; i++) {
		if(b[i] == 1) {
			tmp = tmp + to_string(a[i]) + ' ';
		}
	}
	v.push_back(tmp);
}

void Try(int i) {
	for(int j = 0; j <= 1; j++) {
		b[i] = j;
		if(i == n) print();
		else Try(i + 1);
	} 
}

int main() {
	nhap();
	Try(1);
	sort(v.begin(),v.end());
	for(string x : v) {
		cout << x << endl;
	}
	return 0;
}
