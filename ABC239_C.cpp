#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// ƒ‹[ƒg5‚Ì‹——£‚É‚ ‚é‚©”»’è
bool CheckR5(const ll a, const ll b, const ll c, const ll d)
{
	return 5 == ((a - c) * (a - c) + (b - d) * (b - d));
}

int main()
{
	ll a, b, c, d;
	cin >> a >> b >> c >> d;

	bool bExist(false);
	if (!bExist) bExist = CheckR5(a + 2, b + 1, c, d);
	if (!bExist) bExist = CheckR5(a + 2, b - 1, c, d);
	if (!bExist) bExist = CheckR5(a + 1, b + 2, c, d);
	if (!bExist) bExist = CheckR5(a + 1, b - 2, c, d);
	if (!bExist) bExist = CheckR5(a - 2, b + 1, c, d);
	if (!bExist) bExist = CheckR5(a - 2, b - 1, c, d);
	if (!bExist) bExist = CheckR5(a - 1, b + 2, c, d);
	if (!bExist) bExist = CheckR5(a - 1, b - 2, c, d);
	cout << (bExist ? "Yes" : "No") << endl;
}
