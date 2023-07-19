#include<bits/stdc++.h>

using namespace std;

bool check = false;

void sinh(int a[], int n, int k) {
	bool ok = false;
	for(int i = k; i >= 1; i--) {
		if(a[i] < n - k + i && a[i] < n) {
			a[i] += 1;
			int p = 1;
			for(int j = i + 1; j <= k; j++) {
				a[j] = a[i] + p;
				p++;
			}
			ok = true;
			break;
		}
	}
	if(ok == false) check = true;
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[1005];
		int b[1005];
		for(int i = 1; i <= k; i++) {
			b[i] = i;
		}
		for(int i = 1; i <= k; i++) {
			cin >> a[i];
		}
		int dem = 1;
		while(check == false) {
			int count = 0;
			for(int i = 1; i <= k; i++) {
				if(a[i] == b[i]) {
					count++;
				}
				if(count == k) {
					cout << dem << endl;;
					continue;
				}
			}
			sinh(b,n,k);
			dem++;
		}
		check = false;
	}
}
