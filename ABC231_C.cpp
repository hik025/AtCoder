
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, q;
	cin >> n >> q;

	vector<int> v(n, 0);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < q; ++i)
	{
		int iNum;
		cin >> iNum;
		cout << (v.end() - lower_bound(v.begin(), v.end(), iNum)) << endl;
	}
}
