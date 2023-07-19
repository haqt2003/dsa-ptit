#include<bits/stdc++.h>

using namespace std;	

const long long mod = 1e9 + 7;

long long F[93];

long long fibo(long long n) {
	if(n == 0) return 0;
	if(n == 1) return 1;
	if(n == 2) return 1;
	if(n > 2) return fibo(n-2)%mod + fibo(n-1)%mod;
}

int main() {
	F[0] = 0;
	F[1] = 1;
	for(int i = 2; i <= 92; i++) {
		F[i] = F[i-2] + F[i-1];
	}
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		cout << fibo(n) % mod << endl;
	}
	return 0;
}
