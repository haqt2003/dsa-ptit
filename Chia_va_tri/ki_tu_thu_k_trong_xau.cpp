#include<bits/stdc++.h>

using namespace std;

long long Xau(long long n, long long k) {
	long long x = pow(2,n-1);
	if(k == x) return n;
	if(k < x) return Xau(n-1,k);
	else return Xau(n-1,k-x);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, k;
		cin >> n >> k;
		cout << (char)(Xau(n,k) + 64) << endl;
	}
	return 0;
}
