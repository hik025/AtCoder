
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<bool> v(2 * n + 2, false);

	int iCount(1);
	int iIn(-1);
	while (0 != iIn)
	{
		bool bFind(false);
		while (!bFind)
		{
			if (false == v[iCount])
			{
				bFind = true;
				v[iCount] = true;
				cout << iCount << flush << endl;
			}
			else
			{
				// DO NOTHING
			}
			++iCount;
		}

		cin >> iIn;
		v[iIn] = true;
	}
}
