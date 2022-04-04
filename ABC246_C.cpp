#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n;
	ll k, x;
	cin >> n >> k >> x;
	vector<vector<int>> v(n, vector<int>(2, 0));

	// 合計とクーポンを全額使える枚数を計算
	ll iSumA(0), iSumB(0);
	for (int i = 0; i < n; ++i)
	{
		ll iIn;
		cin >> iIn;
		v[i][0] = iIn;
		v[i][1] = (ll)(iIn / x);
		iSumA += iIn;
		iSumB += (ll)(iIn / x);
	}

	// 全額使えるクーポンを使用
	ll iUseCoupon = min(k, iSumB);
	ll iRet = iSumA - iUseCoupon * x;
	k -= iUseCoupon;

	// 残りを高い商品から順に使用する
	if (k > 0)
	{
		vector<ll> vSort(n, 0);
		for (int i = 0; i < n; ++i)
		{
			if (0 != v[i][1])
			{
				v[i][0] -= v[i][1] * x;
			}
			else
			{
				// DO NOTHING
			}
			vSort[i] = v[i][0];
		}

		sort(vSort.rbegin(), vSort.rend());
		for (int i = 0; i < min(n, (int)k); ++i)
		{
			iRet -= vSort[i];
		}
	}
	else
	{
		// DO NOTHING
	}
	cout << iRet << endl;
}
