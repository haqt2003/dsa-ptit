#include<bits/stdc++.h>

using namespace std;

int n, k;
int a[101];
int b[101];
int result = 0;

void Process() {
	int res = INT_MIN, cnt = 0;
	for(int i = 1; i <= n; i++) {
		if(b[i] == 1) {
			if(res < a[i]) {
			res = a[i];
			cnt++;
		}
		else return;
		}
	}
	if(cnt == k) result++;
}

void Try(int i) {
	for(int j = 0; j <= 1; j++) {
		b[i] = j;
		if(i == n) Process();
		else Try(i+1);
	}
}

int main() {
	cin >> n >> k;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	Try(1);
	cout << result;
	return 0;
}
