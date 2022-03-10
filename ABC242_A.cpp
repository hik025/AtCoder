#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a, b, c, x;
	cin >> a >> b >> c >> x;

	double dRet = 0.0;
	if (x <= a)
	{
		dRet = 1.0;
	}
	else if (x <= b)
	{
		dRet = c / (b - a);
	}
	else
	{
		// DO NOTHING
	}

	cout << std::fixed << std::setprecision(12) << dRet << endl;
}
