#include <bits/stdc++.h>
using namespace std;

// ’¼iŒã‚ÌÀ•W‚ð•Ô‚·
void GoStraight(int &x, int &y, int r)
{
	const int iNum = r % 4;
	if (0 == iNum) ++x;
	else if (1 == iNum) --y;
	else if (2 == iNum) --x;
	else ++y;
}

int main()
{
	int n;
	string t;
	cin >> n >> t;

	int x(0), y(0), r(0);
	for (int i = 0; i < n; ++i)
	{
		if ('S' == t[i]) GoStraight(x, y, r);
		else ++r;
	}

	cout << x << (" ") << y << endl;
}
