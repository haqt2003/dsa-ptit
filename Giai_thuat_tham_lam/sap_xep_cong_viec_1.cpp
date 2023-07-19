#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int,int> b) {
	return a.second < b.second;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < n; i++) {
			cin >> b[i];
		}
		vector<pair<int,int>> v;
		for(int i = 0; i < n; i++) {
			v.push_back({a[i], b[i]});
		}
		sort(v.begin(),v.end(),cmp);
		int cnt = 1;
		int time = v[0].second;
		for(int i  = 1; i < v.size(); i++) {
			if(v[i].first >= time) {
				cnt++;
				time = v[i].second;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
