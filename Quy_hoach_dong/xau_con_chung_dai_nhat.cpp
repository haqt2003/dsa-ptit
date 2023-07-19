#include<bits/stdc++.h>

using namespace std;

int F[1001][1001];

int main() {
	int t;
	cin >> t;
	while(t--) {
		memset(F,0,sizeof(F));
		string s1, s2;
		cin >> s1 >> s2;
		int res = 0;
		for(int i = 1; i <= s1.size(); i++) {
			for(int j = 1; j <= s2.size(); j++) {
				if(s1[i-1] == s2[j-1]) F[i][j] = F[i-1][j-1] + 1;
				else F[i][j] = max(F[i][j-1], F[i-1][j]);
				res = max(res,F[i][j]);
			}
		}
		cout << res << endl;
	}
	return 0;
}
