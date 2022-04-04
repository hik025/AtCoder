#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n;
	ll k, x;
	cin >> n >> k >> x;
	vector<vector<int>> v(n, vector<int>(2, 0));

	// ���v�ƃN�[�|����S�z�g���閇�����v�Z
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

	// �S�z�g����N�[�|�����g�p
	ll iUseCoupon = min(k, iSumB);
	ll iRet = iSumA - iUseCoupon * x;
	k -= iUseCoupon;

	// �c����������i���珇�Ɏg�p����
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
