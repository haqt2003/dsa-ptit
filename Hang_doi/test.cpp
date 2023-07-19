#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int k; cin >> k;
		string s; cin >> s;
		priority_queue <ll, vector<ll>> pq;
		ll a[26] = {0};
		for(int x : s) {
			
			a[x-'A']++;
			cout << a[x];
		}
		for(int i = 0; i < 26; i++) {
			cout << a[i] << " ";
			if(a[i]) pq.push(a[i]);
		}
		while(!pq.empty())
		{
			cout << pq.top(); pq.pop();
		}

	}
	return 0;
}