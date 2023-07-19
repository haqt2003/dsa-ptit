#include<bits/stdc++.h>

using namespace std;

vector<bool> ok(1000001, false);

void Sang(int n) {
	for(long long i = 2; i <= sqrt(n); i++) {
		if(!ok[i]) {
			for(long long j = i*i; j <= n; j+=i) {
				ok[j] = true;
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		Sang(n);
		bool test = false;
		for(int i = 2; i <= sqrt(n); i++) {
			if(ok[i] == false && ok[n-i] == false) {
				cout << i << " " << n - i << endl;
				test = true;
				break;
			}
		}
		if(!test) cout << -1 << endl;
	}
}
