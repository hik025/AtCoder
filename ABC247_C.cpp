
#include <bits/stdc++.h>
using namespace std;

void Output(const int n, vector<int> & v)
{
	if (1 == n)
	{
		v.push_back(1);
	}
	else
	{
		Output(n - 1, v);
		v.push_back(n);
		Output(n - 1, v);
	}
}

int main()
{
	int n;
	cin >> n;
	vector<int> v;
	Output(n, v);

	const int iSize = v.size();
	for (int i = 0; i < iSize; ++i)
	{
		cout << v[i];
		if (i != iSize - 1) cout << " ";
		else cout << endl;
	}
}
