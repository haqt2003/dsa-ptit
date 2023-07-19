#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
	return a.second < b.second;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n], b[n];
		vector<pair<int,int>> v;
		for(int i = 0; i < n; i++) {
			cin >> a[i] >> b[i];
			v.push_back({a[i], b[i]});
		}
		sort(v.begin(),v.end(),cmp);
		int cnt = 1, index = v[0].second;
		for(int i = 0; i < v.size(); i++) {
			if(v[i].first >= index) {
				cnt++;
				index = v[i].second;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
