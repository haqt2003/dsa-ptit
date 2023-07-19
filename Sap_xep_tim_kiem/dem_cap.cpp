#include<bits/stdc++.h>

using namespace std;

int preProcess(int x, int y[], int m, int cY[]) {
	if(x == 0) return 0;
	if(x == 1) return cY[0];
	int cnt = 0;
	int index = upper_bound(y,y+m,x) - y;
	cnt += (m - index);
	cnt += (cY[0] + cY[1]);
	if(x == 2) cnt -= (cY[3] + cY[4]);
	if(x == 3) cnt += cY[2];
	return cnt;
}

int process(int x[], int y[], int n, int m) {
	int cY[5] = {0};
	for(int i = 0; i < m; i++) {
		if(y[i] < 5) {
			cY[y[i]]++;
		}
	}
	sort(y,y+m);
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		cnt += preProcess(x[i],y,m,cY);
	}
	return cnt;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int x[n], y[m];
		for(int &i : x) cin >> i;
		for(int &i : y) cin >> i;
		cout << process(x,y,n,m) << endl;
	}
	return 0;
}
