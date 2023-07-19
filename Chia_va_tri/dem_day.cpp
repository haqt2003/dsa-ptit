#include<bits/stdc++.h>

using namespace std;

long long mod = 123456789;

long long Pow(long long n, long long k) {
	if(k == 0) return 1;
	if(k == 1) return n%mod;
	long long x = Pow(n,k/2);
	if(k % 2 == 0) return (x*x)%mod;
	else return n*(x*x%mod)%mod;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n, k;
		cin >> k;
		n = 2;
		cout << Pow(n,k-1) << endl;
	}
	return 0;
}
