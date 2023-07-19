#include<bits/stdc++.h>

using namespace std;

bool check = false;

void sinh(int b[], int n) {
	bool ok = false;
	for(int i = n - 1; i >= 0; i--) {
		if(b[i] == 0) {
			b[i] = 1;
			ok = true;
			for(int j = i + 1; j < n; j++) {
				b[j] = 0;
			}
			break;
		}
	}
	if(ok == false) check = true;
}

bool ktr(int a[], int b[], int n, int k) {
	int sum = 0;
	for(int i = 0; i < n; i++) {
		if(b[i] == 1) {
			sum += a[i];
		}
	}
	if(sum == k) return true;
	return false;
}

void in(int a[], int b[], int n, int k) {
	for(int i = 0; i < n; i++) {
		if(b[i] == 1) {
			cout << a[i] << " ";
		}
	}
	cout << endl;
}

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	int b[100] = {0};
	int dem = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	while(check == false) {
		if(ktr(a,b,n,k)) {
			in(a,b,n,k);
			dem++;
		}
		sinh(b,n);
	}
	cout << dem;
}
