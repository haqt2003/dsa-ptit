#include<bits/stdc++.h>

using namespace std;

string b[10001];

string np(int i) {
	vector<int> v;
	while(i>0) {
		v.push_back(i%2);
		i/=2;
	}
	string s = "";
	for(int j = v.size() - 1; j >= 0; j--) {
		s+= to_string(v[j]);
	}
	return s;
}

void Pre(int n) {
	b[0] = "0";
	b[1] = "1";
	for(int i = 2; i <= n; i++) {
		b[i] = np(i);
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		Pre(n);
		for(int i = 1; i <= n; i++) {
			cout << b[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
