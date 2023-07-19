#include<bits/stdc++.h>

using namespace std;

bool check = false;

int a[100001];
int b[100001];
set<int> v;

void sinh(int a[], int n, int k) {
	bool ok = false;
	for(int i = k; i >= 1; i--) {
		if(a[i] < n - k + i && a[i] < n) {
			a[i] += 1;
			for(int j = i + 1; j <= k; j++) {
				a[j] = a[i] + j - i;
			}
			ok = true;
			break;
		}
	}
	if(ok == false) check = true;
}

void in(int a[], int n, int k) {
	int dem = 0;
	for(int i = 1; i <= k; i++) {
		for(int x : v) {
			if(a[i] == x) {
				dem++;
			}
		}
	}
	int mark = 0;
	for(int i = 1; i <= k; i++) {
		for(int x : v) {
			if(a[i] == x && dem == k) {
				cout << a[i] << " ";
				mark = 1;
			}
			
		}
	}
	if(mark == 1) cout << endl;
}

int main(){
		int n, k;
		cin >> n >> k;
		for(int i = 1; i <= n; i++) {
			cin >> b[i];
			v.insert(b[i]);
		}
		int j = 1;
		for(int x : v) {
			a[j] = x;
			j++;
		}
		while(check == false) {
			in(a,n,k);
			sinh(a,n,k);
		}
}
