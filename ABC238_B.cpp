
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v;
	int iRad(0);
	for (int i = 0; i < n; ++i){
		int iIn;
		cin >> iIn;
		iRad = (iRad + iIn) % 360;
		v.push_back(iRad);
	}

	sort(v.begin(), v.end());
	int iRet = v[0] - 0;
	for (int i = 0; i < n; ++i){
		if (i < n - 1){
			iRet = max(iRet, v[i + 1] - v[i]);
		}
		else{
			iRet = max(iRet, 360 - v[i]);
		}
	}

	cout << iRet << endl;
}
