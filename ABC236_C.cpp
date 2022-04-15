
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<string> vn(n);
	set<string> sm;
	for (int i = 0; i < n; ++i){
		cin >> vn[i];
	}
	for (int i = 0; i < m; ++i){
		string s;
		cin >> s;
		sm.insert(s);
	}

	for (auto val : vn){
		cout << ((1 == sm.count(val)) ? "Yes" : "No") << endl;
	}
}
