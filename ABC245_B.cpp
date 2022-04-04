#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<bool> v(2001, false);
	for (int i = 0; i < n; ++i)
	{
		int iNum;
		cin >> iNum;
		v[iNum] = true;
	}

	int iRet(0);
	for (int i = 0; i < 2001; ++i)
	{
		if (false == v[i])
		{
			iRet = i;
			break;
		}
		else
		{
			// DO NOTHING
		}
	}

	cout << iRet << endl;
}
