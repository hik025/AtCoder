
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	set<int> s;
	for (int i = 0; i<n; ++i){
		int iIn;
		cin >> iIn;
		s.insert(iIn);
	}
	cout << s.size() << endl;
}
