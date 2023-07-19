#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int b[10001] = {0};
		int k;
		cin >> k;
		string s;
		cin >> s;
		for(int i = 0; i < s.length(); i++) {
			b[s[i]]++;
		}
		int max = 0;
		for(int i = 0; i < s.length(); i++) {
			if(b[s[i]] > max) {
				max= b[s[i]];
			}
		}
		if(s.length() >= max * k - (k - 1)) cout << 1 << endl;
		else cout << -1 << endl;
	}
	return 0;
}
