#include<bits/stdc++.h>

using namespace std;

bool check = false;

int a[10001];

void sinh(int a[], int n) {
	bool ok = false;
	int i = n - 2;
	while(i >= 0 && a[i] > a[i+1]) i--;
	if(i >= 0) {
		int k = n;
		while(a[k] < a[i]) k--;
		if(k > i) {
			ok = true;
			swap(a[i], a[k]);
			int r = i + 1, s = n-1;
			while(r <= s) {
				swap(a[r], a[s]);
				r++;
				s--;
			}
		}
	}
	if(ok == false) check = true;
}

void in(int a[], int n) {
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(){
		int n;
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a,a+n);
		while(check == false) {
			in(a,n);
			sinh(a,n);
		}
		cout << endl;
}
