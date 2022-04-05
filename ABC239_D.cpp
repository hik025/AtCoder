
#include <bits/stdc++.h>
using namespace std;

// 素数チェック
bool IsPrime(const int iNum)
{
	bool bRet(true);

	if (2 == iNum)
	{
		// DO NOTHING
	}
	else
	{
		for (int i = 2; (i < iNum) && bRet; ++i)
		{
			bRet = (0 != iNum % i);
		}
	}

	return bRet;
}

// 高橋が勝利するか
bool bCheckWinT(const int iT, const int iStart, const int iEnd)
{
	bool bRet(true);
	for (int i = iStart; (i <= iEnd) && bRet; ++i)
	{
		const int iSum = i + iT;
		bRet = !IsPrime(iSum);
	}

	return bRet;
}

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	bool bWinT(false);
	for (int i = b; (a <= i) && !bWinT; --i)
	{
		bWinT = bCheckWinT(i, c, d);
	}
	cout << (bWinT ? "Takahashi" : "Aoki") << endl;
}
