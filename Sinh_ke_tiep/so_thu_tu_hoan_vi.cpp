#include<bits/stdc++.h>

using namespace std;

bool check = false;

void sinh(int a[], int n) {
	bool ok = false;
	int i = n - 1;
	while(i > 0 && a[i] > a[i+1]) i--;
	if(i > 0) {
		int k = n;
		while(a[k] < a[i]) k--;
		swap(a[i], a[k]);
		ok = true;
		int r = i + 1, s = n;
		while(r <= s) {
			swap(a[r] , a[s]);
			r++;
			s--;
		}
	}
	if(ok == false) check = true;
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[1005];
		int b[1005];
		for(int i = 1; i <= n; i++) {
			b[i] = i;
		}
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		int dem = 1;
		while(check == false) {
			int count = 0;
			for(int i = 1; i <= n; i++) {
				if(a[i] == b[i]) {
					count++;
				}
				if(count == n) {
					cout << dem << endl;;
					continue;
				}
			}
			sinh(b,n);
			dem++;
		}
		check = false;
	}
}
