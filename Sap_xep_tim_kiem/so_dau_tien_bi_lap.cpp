#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		map<int,int> mp;
		for(int &i : a) {
			cin >> i;
			mp[i]++;
		}
		int mark = 0; 
		for(int i = 0 ; i < n; i++) {
			if(mp[a[i]] > 1) {
				cout << a[i] << endl;
				mark = 1;
				break;
			}
		}
		if(mark == 0) {
			cout << "NO" << endl;
		}
	}
	return 0;
}
