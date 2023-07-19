#include<bits/stdc++.h>

using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	string c = "", d = "";
	for(int i = 0; i < a.length(); i++) {
		if(a[i] == '6') {
			a[i] = '5';
		}
		c += a[i];
	}
	for(int i = 0; i < b.length(); i++) {
		if(b[i] == '6') {
			b[i] = '5';
		}
		d += b[i];
	}
	cout << stoi(c) + stoi(d) << " ";
	for(int i = 0; i < c.length(); i++) {
		if(c[i] == '5') {
			c[i] = '6';
		}
	}
	for(int i = 0; i < d.length(); i++) {
		if(d[i] == '5') {
			d[i] = '6';
		}
	}
	cout << stoi(c) + stoi(d);
	return 0;
}
