
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	double d2 = x*x + y*y;
	double d = sqrt(d2);
	cout << x / d << " " << y / d << endl;
}
