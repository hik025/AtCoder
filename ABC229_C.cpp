#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n, w;
	cin >> n >> w;
	vector<pair<ll, ll>> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i].first >> v[i].second;
	}

	ll iTotal(0);
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	int i(0);
	while ((0 < w) && (i <= n))
	{
		ll iNum = min(v[i].second, w);
		iTotal += (v[i].first * iNum);
		w -= iNum;
		++i;
	}
	cout << iTotal << endl;
}
