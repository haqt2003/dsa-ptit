#include<bits/stdc++.h>

using namespace std;

int main() {
	queue<int> q;
	int t;
	cin >> t;
	string s;
	while(t--) {
		cin >> s;
		if(s == "PUSH") {
			int n;
			cin >> n;
			q.push(n);
		}
		else if(s == "PRINTFRONT") {
			(q.empty()) ? cout << "NONE" : cout << q.front();
		}
		else if(s == "POP") {
			if(!q.empty()) {
				q.pop();
			}
		}
		cout << endl;
	}
	return 0;
}
