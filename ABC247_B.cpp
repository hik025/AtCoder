
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<string> vs(n), vt(n), va(n * 2);
	for (int i = 0; i < n; ++i)
	{
		string s, t;
		cin >> s >> t;
		vs[i] = s;
		vt[i] = t;
		va[i * 2] = s;
		va[i * 2 + 1] = t;
	}

	bool bRet(true);
	for (int i = 0; i < n; ++i)
	{
		const bool b1 = (1 < count(va.begin(), va.end(), vs[i]));
		const bool b2 = (1 < count(va.begin(), va.end(), vt[i]));
		const bool b3 = vs[i] != vt[i];
		if (b1 && b2 && b3)
		{
			bRet = false;
			break;
		}
		else
		{
			// DO NOTHING
		}
	}

	cout << (bRet ? "Yes" : "No") << endl;
}
