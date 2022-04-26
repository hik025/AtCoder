#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d, e, f, x;
	cin >> a >> b >> c >> d >> e >> f >> x;
	int iDT(0), iDA(0), iTT(x), iTA(x);

	while (0 < iTT){
		int iTime = min(iTT, a);
		iDT += (iTime * b);
		iTT -= (iTime + c);
	}

	while (0 < iTA){
		int iTime = min(iTA, d);
		iDA += (iTime * e);
		iTA -= (iTime + f);
	}

	cout << ((iDT == iDA) ? "Draw" : (iDT > iDA) ? "Takahashi" : "Aoki") << endl;
}
