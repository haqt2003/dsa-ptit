#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int res = 0;
	int F[1001] = {0};
	for(int i = 1; i <= n; i++) {
		F[i] = 1;
		for(int j = 1; j < i; j++) {
			if(a[i] > a[j]) F[i] = max(F[i],F[j] + 1);
		}
		res = max(res, F[i]);
	}
	cout << res;
	return 0;
}
