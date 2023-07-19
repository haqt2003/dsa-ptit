#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--) {
		int mark = 0;
		int n,x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < n; i++) {
			if(x == a[i]) {
				cout << 1 << endl;
				mark = 1;
				break;
			}
		}
		if(mark == 0) cout << -1 << endl;
	}
}
