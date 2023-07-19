#include<bits/stdc++.h>

using namespace std;

int a[1005], b[1005];

void sinh(int b[], int n, int k) {
	int i = k;
	while(b[i] == n - k + i) i--;
	if(i == 0) cout << k << endl;
	else {
		b[i]++;
		for(int j = i + 1; j <= k; j++) {
			b[j] = b[i] + j - i;
		}
		int cnt = 0;
		for(int j = 1; j <= k; j++) {
			if(binary_search(b+1, b+k+1, a[j]) == 1) cnt++;
		}
		cout << k-cnt << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n,k;
		cin >> n >> k;
		for(int i = 1; i <= k; i++) {
			cin >> b[i];
			a[i] = b[i];
		}
		sinh(b,n,k);
	}
}
