
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> va(n), vb(n), vc(n * 2);
	for (int i = 0; i < n; ++i)
	{
		cin >> va[i];
		vc[i] = va[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> vb[i];
		vc[i + n] = vb[i];
	}

	sort(vc.begin(), vc.end());
	int iCount(0);
	for (int i = 0; i < n * 2 - 1; ++i)
	{
		if (vc[i] == vc[i + 1]) ++iCount;
	}

	int iSame(0);
	for (int i = 0; i < n; ++i)
	{
		if (va[i] == vb[i]) ++iSame;
	}

	cout << iSame << endl << (iCount - iSame) << endl;
}
