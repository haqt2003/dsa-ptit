#include<bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

long long Pow(long long a, long long b) {
	if(b == 0) return 1;
	long long x = Pow(a,b/2);
	if(b%2==0) return x*x%mod;
	return a*(x*x%mod)%mod;
}

int main() {
	while(1) {
		long long a; 
		long long b;
		cin >> a >> b;
		if(a == 0 && b == 0) {
			break;
		}
		cout << Pow(a,b) << endl;
	}
	return 0;
}
