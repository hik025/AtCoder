#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n, 0);
	for (int i = 0; i<4 * n - 1; ++i){
		int iIn;
		cin >> iIn;
		v[iIn - 1] += 1;
	}

	auto result = find(v.begin(), v.end(), 3);
	cout << distance(v.begin(), result) + 1 << endl;
}
