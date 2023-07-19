#include<bits/stdc++.h>

using namespace std;

int main() {
	deque<int> dq;
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		if(s == "PUSHFRONT") {
			int n;
			cin >> n;
			dq.push_front(n);
		}
		else if(s == "PRINTFRONT") {
			(dq.empty()) ? cout << "NONE" : cout << dq.front();
		}
		else if(s == "POPFRONT") {
			if(!dq.empty()) {
				dq.pop_front();
			}
		}
		else if(s == "PUSHBACK") {
			int n;
			cin >> n;
			dq.push_back(n);
		}
		else if(s == "PRINTBACK") {
			(dq.empty()) ? cout << "NONE" : cout << dq.back();
		}
		else if(s == "POPBACK") {
			if(!dq.empty()) {
				dq.pop_back();
			}
		}
		cout << endl;
	}
	return 0;
}
