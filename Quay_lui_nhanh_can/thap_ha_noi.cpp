#include<bits/stdc++.h>

using namespace std;

void trans(int n, char a, char b) {
	cout << a << " -> " << b << endl;;
}

void Try(int n, char a, char b, char c) {
	if(n == 1) {
		trans(1,a,c);
	}
	else{
		Try(n-1,a,c,b);
		trans(n,a,c);
		Try(n-1,b,a,c);
	}
}

int main() {
	int n;
	cin >> n;
	char a = 'A', b = 'B', c = 'C';
	Try(n,a,b,c);
	return 0;
}
