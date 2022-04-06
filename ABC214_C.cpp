
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int s[n], t[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> s[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> t[i];
	}

	int a[n];
	int iTime = t[0];
	for (int i = 0; i < n * 2; ++i)
	{
		iTime = min(iTime + s[(i - 1) % n], t[i % n]);
		a[i % n] = iTime;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << endl;
	}
}
