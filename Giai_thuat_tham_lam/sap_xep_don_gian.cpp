#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>

int main()
{
    int n;
    cin >> n;
    vi a(n+5), b(n+5,0);
    for(int i = 1; i <= n; i++) {
    	cin >> a[i];
	}
	int res = 0;
	for(int i = 1; i <= n; i++) {
		b[a[i]] = b[a[i] - 1] + 1;
		res = max(res,b[a[i]]);
	}
	cout << n - res << endl;
}