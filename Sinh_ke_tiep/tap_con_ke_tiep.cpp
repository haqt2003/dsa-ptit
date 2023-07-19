#include<bits/stdc++.h>

using namespace std;

int a[1005];

void sinh(int n, int k) {
	int mark = 0;
	for(int i = k; i >= 1; i--) {
		if(a[i] < n - k + i && a[i] < n) {
			a[i] += 1;
			int p = 1;
			for(int j = i + 1; j <= k; j++) {
				a[j] = a[i] + p;
				p++;
			}
			mark = 1;
			break;
		}
	}
	if(mark == 0) for(int i = 1; i <= k; i++) a[i] = i;
}

void in(int n, int k) {
	for(int i = 1; i <= k; i++) {
		cout << a[i] << " ";
	} 
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		for(int i = 1; i <= k; i++) {
			cin >> a[i];
		}
		sinh(n,k);
		in(n,k);
	}
}


//1 4 5
//
//a[i] < n - k + i
// 5    < 2 + 3
// 4    < 2 + 2
// 1    < 2 + 1