#include<bits/stdc++.h>

using namespace std;

long long solve(long long n, long long k) {
	long long x = pow(2,n-1);
	if(k == x) return n;
	if(k < x) return solve(n-1,k);
	return solve(n-1,k-x);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, k;
		cin >> n >> k;
		cout << solve(n,k) << endl;
	}
	return 0;
}

