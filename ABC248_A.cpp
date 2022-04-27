#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int iNum;
	for (int i = 0; i <= 9; ++i){
		string s1 = to_string(i);
		if (string::npos == s.find(s1)){
			iNum = i;
			break;
		}
		else{
			// DO NOTHING
		}
	}

	cout << iNum << endl;
}
