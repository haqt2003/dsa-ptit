#include<bits/stdc++.h>

using namespace std;

long long F[93];

char Word(int n, long long k) {
	int cnt = 0;
	if(n == 1) cnt++;
	if(k <= F[n-2]) Word(n-2,k);
	else Word(n-1,k-F[n-2]);
	return cnt;
}

int main() {
	F[1] = 1;
	F[2] = 1;
	for(int i = 3; i <= 92; i++) {
		F[i] = F[i-2] + F[i-1];
	}
	int t;
	cin >> t;
	while(t--) {
		int n;
		long long k;
		cin >> n;
		cin >> k;
		cout << Word(n,k) << endl;
	}
	return 0;
}
