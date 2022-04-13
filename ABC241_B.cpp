#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> v(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	bool bRet(true);
	for (int i = 0; i < m; ++i)
	{
		int iNum;
		cin >> iNum;
		auto result = find(v.begin(), v.end(), iNum);
		if (result == v.end())
		{
			bRet = false;
			break;
		}
		else
		{
			v[distance(v.begin(), result)] = 0;
		}
	}

	cout << (bRet ? "Yes" : "No") << endl;
}
