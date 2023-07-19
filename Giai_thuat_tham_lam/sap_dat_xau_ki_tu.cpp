#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<char,int> a, pair<char,int> b) {
	return a.second < b.second;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		map<char,int> mp;
		for(int i = 0; i < s.length(); i++) {
			mp[s[i]]++;
		}
		vector<pair<char,int>> v(mp.begin(),mp.end());
		sort(v.begin(),v.end(),cmp);
		if(s.length() - v[v.size() - 1].second >= v[v.size() - 1].second - 1) cout << 1 << endl;
		else cout << - 1 << endl;
	}
	return 0;
}
