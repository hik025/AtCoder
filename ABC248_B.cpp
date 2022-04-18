
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll a, b, k;
	cin >> a >> b >> k;

	int iCount = 0;
	while (a < b){
		++iCount;
		a *= k;
	}

	cout << iCount << endl;
}
