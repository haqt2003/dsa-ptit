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

void in(int a[], int n, int k) {
	for(int i = 1; i <= k; i++) {
		cout << char(a[i] + 64);
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		check = false;
		int n, k;
		cin >> n >> k;
		int a[1005];
		for(int i = 1; i <= k; i++) {
			a[i] = i;
		}
		while(check == false) {
			
			in(a,n,k);
			sinh(a,n,k);
		}
	}
}
