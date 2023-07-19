#include<bits/stdc++.h>

using namespace std;

char n;
int k;
char a[100];
//set<char> s;
//vector<char> v;

void nhap() {
	cin >> n >> k;
}

void in() {
	for(int i = 1; i <= k; i++) {
		cout << a[i];
	}
	cout << endl;
}

void Try(int i, char h) {
	for(int j = h; j <= n; j++) {
		a[i] = j;
		if(i == k) in();
		else Try(i+1,j);
	}
}

int main() {	
	nhap();
	Try(1,'A');
	return 0;
}
