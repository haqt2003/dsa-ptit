#include<bits/stdc++.h>

using namespace std;

long long mod = 1e9 + 7;

long long Pow(long long n, long long k) {
	if(k == 0) return 1;
	if(k == 1) return n % mod;	
	long long x = Pow(n,k/2);
	if(k % 2 == 0) return (x * x) % mod;
	else return ((x * x) % mod * n) % mod; 
}

long long Reverse(long long n) {
	long long r = 0;
		while(n > 0) {
			r = r * 10 + n%10;
			n /= 10;
		}
		return r;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		long long r = Reverse(n);
		cout << Pow(n,r) << endl;
	}
	return 0;
}
