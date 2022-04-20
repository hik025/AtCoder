
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll x;
	cin >> x;

	const bool bPlus = x >= 0;
	const bool bZero = (0 == x % 10);
	if (bZero || bPlus) x /= 10;
	else x = x / 10 - 1;

	cout << x << endl;
}
