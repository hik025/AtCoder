#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll num;
	cin >> num;
	vector<char> v;
	while (0 < num){
		if (0 == num % 2){
			num /= 2;
			v.insert(v.begin(), 'B');
		}
		else{
			num -= 1;
			v.insert(v.begin(), 'A');
		}
	}

	for (auto out : v){
		cout << out;
	}
	cout << endl;
}
