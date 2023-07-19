#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int res = 0;
		for(int i = 0; i < s.length(); i++) {
			int l = i, r = i;
			while(l >= 0 && r < s.length()) {
				if(s[l] == s[r]) {
					res = max(res,r-l+1);
					l--;r++;
				}
				else break;
			}
		}
		for(int i = 0; i < s.length() - 1; i++) {
			int l = i, r = i+1;
			while(l >= 0 && r < s.length()) {
				if(s[l] == s[r]) {
					res = max(res, r-l+1);
					l--;r++;
				}
				else break;
			}
		}
		cout << res << endl;
	}
	return 0;
}
