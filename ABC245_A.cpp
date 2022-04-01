#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	const bool bRet = (a * 60 + b) > (c * 60 + d);
	cout << (bRet ? "Aoki" : "Takahashi") << endl;
}
